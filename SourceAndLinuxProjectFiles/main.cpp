#include <GL/glew.h>
#include <GL/glut.h>
#include "BasicDataTypeDeclarations.h"

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

// Create a buffer ptr saver
ui32 buffer;
ui32 shader;

// Define our Vericies
float positions[6] = {
	 0.0f, -0.5f,
	-0.5f,  0.5f,
	 0.5f,  0.5f
};

void Setup()
{
    // Generate a buffer in GPU
	glGenBuffers(1, &buffer);

    // Select the buffer in GPU and send data to it
	glBindBuffer(GL_ARRAY_BUFFER, buffer);
	glBufferData(GL_ARRAY_BUFFER, 6 * sizeof(float), positions, GL_STATIC_DRAW);

    // Tell OpenGL what things are in this buffer
    glEnableVertexAttribArray(0);
    glVertexAttribPointer(0, 2, GL_FLOAT, GL_FALSE, 2 * sizeof(float), 0);

    // Debind the buffer
    glBindBuffer(GL_ARRAY_BUFFER, 0);

	string vertexShader = 
	"#version 330 core\n"
	"\n"
	"layout (location = 0) in vec4 position;\n"
	"\n"
	"void main(){\n"
	"	gl_Position = position;\n"
	"}\n";

	string fragmentShader = 
	"#version 330 core\n"
	"\n"
	"layout (location = 0) out vec4 color;\n"
	"\n"
	"void main(){\n"
	"	color = vec4(1.0, 0.0, 0.0, 1.0);\n"
	"}\n";

	shader = CreateShader(vertexShader, fragmentShader);
	glUseProgram(shader);
}

void Update()
{
	// Clear the screen
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	// Draw Triangles
	glDrawArrays(GL_TRIANGLES, 0, 6);

	// Swap the front and back buffer
	glutSwapBuffers();
}

void CleanUp(){
	glDeleteProgram(shader);
	cout << "The Shader has been deleted!" << endl;
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
	glutDisplayFunc(Update);
	// Run our update function every frame
	glutMainLoop();
	// Run CleanUp() after the main loop ends
	CleanUp();

	// Return after closing the window
	return 0;
}
