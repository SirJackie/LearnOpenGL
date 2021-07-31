#include <GL/glew.h>
#include <GL/glut.h>
#include "BasicDataTypeDeclarations.h"
#include "ErrorHandling.h"
#include "VertexBuffer.h"
#include "IndexBuffer.h"

struct ShaderProgramSource{
	string VertexShader;
	string FragmentShader;
};

ShaderProgramSource ParseShader(string filePath){
	enum class ShaderType{
		NONE = -1, VERTEX = 0, FRAGMENT = 1
	};

	ifstream stream(filePath);
	string line;
	ShaderType type = ShaderType::NONE;
	stringstream ss[2];

	while(getline(stream, line)){
		if(line.find("#shader") != string::npos){
			if(line.find("vertex")   != string::npos) type = ShaderType::VERTEX;
			if(line.find("fragment") != string::npos) type = ShaderType::FRAGMENT;
		}
		else{
			ss[(int)type] << line << '\n';
		}
	}

	return {
		ss[(i32)ShaderType::VERTEX].str(),
		ss[(i32)ShaderType::FRAGMENT].str()
	};
}

static ui32 CompileShader(ui32 shaderType, const string& shaderCode){
	// Create a seperated shader
	ui32 shader = glCreateShader(shaderType);

	// Replace the source code of this shader object
	const char* code_cstr = shaderCode.c_str();
	glShaderSource(shader, 1, &code_cstr, nullptr);

	// Compile the shader
	glCompileShader(shader);

	// Get the compiling status
	i32 result;
	glGetShaderiv(shader, GL_COMPILE_STATUS, &result);

	// If there is at least one error
	if(result == GL_FALSE){
		// Get the Length of the Error Message
		i32 length;
		glGetShaderiv(shader, GL_INFO_LOG_LENGTH, &length);

		// Get the Error Message itself
		char* message = new char[length];
		glGetShaderInfoLog(shader, length, &length, message);

		// Output the error message
		cout << "Failed to compile "
		     << (shaderType == GL_VERTEX_SHADER ? "Vertex" : "Fragment")
			 << " Shader." << endl
			 << message << endl;

		// Return an empty shader
		glDeleteShader(shader);
		return 0;
	}

	return shader;
}

static ui32 CreateShader(const string& vertexShader, const string& fragmentShader){
	// Create a new whole shader
	ui32 program = glCreateProgram();

	// Compile Vertex and Fragment Shader
	ui32 vs = CompileShader(GL_VERTEX_SHADER, vertexShader);
	ui32 fs = CompileShader(GL_FRAGMENT_SHADER, fragmentShader);

	// Attach Vertex and Fragment Shader into the whole shader
	glAttachShader(program, vs);
	glAttachShader(program, fs);

	// Do Linking and Validating, make the whole shader run
	glLinkProgram(program);
	glValidateProgram(program);

	// Flag the deletions of Vertex and Fragment Shader
	glDeleteShader(vs);
	glDeleteShader(fs);

	return program;
}

// Create ui32s to save buffers' ID

VertexBuffer vb;
IndexBuffer  ib;
ui32 vao;  // Vertex Array  Object
ui32 shader;

#define POSITION_LENGTH 8
#define INDICIES_LENGTH 6

// Define our Vericies
f32 positions[POSITION_LENGTH] = {
	-0.5f, -0.5f,
	 0.5f, -0.5f,
	 0.5f,  0.5f,
	-0.5f,  0.5f
};

ui32 indicies[INDICIES_LENGTH] = {
	0, 1, 2,
	2, 3, 0
};

void Setup()
{
	// Load our shaders
	ShaderProgramSource source = ParseShader("../Resources/basic.shader");
	shader = CreateShader(source.VertexShader, source.FragmentShader);
	glUseProgram(shader);

    // Create vbo
	vb.Init(positions, POSITION_LENGTH * sizeof(f32));

    // Create vao
	// Make sure to create vao after vbo and before ibo
	// So that the vao can properly build the connection to vbo
	GLCall(glGenVertexArrays(1, &vao));
	GLCall(glBindVertexArray(vao));
	GLCall(glEnableVertexAttribArray(0));
	GLCall(glVertexAttribPointer(0, 2, GL_FLOAT, GL_FALSE, 2 * sizeof(float), 0));

	// Create ibo
	ib.Init(indicies, sizeof(indicies) / sizeof(ui32));

	// Unbind all the stuffs
	// Make sure to debind vao before vbo
	// Otherwise the vao will lose connection to vbo
	glBindVertexArray(0);
	glUseProgram(0);
	vb.Unbind();
	ib.Unbind();
}

float deltaColor = 0.0f;

void Update()
{
	// Clear the screen
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	// Set delta color
	deltaColor += 0.01f;
	if(deltaColor > 1.0f){
		deltaColor = 0.0f;
	}

	// Bind shader and set uniform
	glUseProgram(shader);
	i32 location = glGetUniformLocation(shader, "u_Color");
	glUniform4f(location, deltaColor, deltaColor, 0.0f, 1.0f);

	// Bind vao
	// Because the vao is connected to the vbo
	// So we no longer need to bind the vbo
	glBindVertexArray(vao);

	// Bind ibo
	ib.Bind();

	// Draw Triangles
	GLCall(glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_INT, csNullPtr));

	// Unbind all the stuffs
	glUseProgram(0);
	glBindVertexArray(0);
	ib.Unbind();

	// Swap the front and back buffer
	glutSwapBuffers();
}

void CleanUp(){
	glDeleteProgram(shader);
	cout << "The Shader has been deleted!" << endl;
}

void OnTimer(int value)
{
   glutPostRedisplay();
   glutTimerFunc(16, OnTimer, 1);
}

int main(int argc, char** argv)
{
	// Init GLUT
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);

	// Create a window
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(30, 30);
	glutCreateWindow(argv[0]);

	// Init GLEW ---AFTER CREATING A WINDOW--- !!! (This is very important!)
	if (glewInit() != GLEW_OK) {
		cout << "Error when initializing glew!\n" << endl;
		return -1;
	}

	// Print OpenGL Version
	cout << glGetString(GL_VERSION) << endl;

	// Run our custom Setup() function
	Setup();
	// Bind our update function to GLUT
	glutDisplayFunc(Update);        // Refresh when window resize
	glutTimerFunc(16, OnTimer, 1);  // Refresh every 16ms (about 60 FPS)
	// Run our update function every frame
	glutMainLoop();
	// Run CleanUp() after the main loop ends
	CleanUp();

	// Return after closing the window
	return 0;
}
