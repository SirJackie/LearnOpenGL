#include <GL/glew.h>
#include <GL/glut.h>
#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

typedef    unsigned long long  ui64;     // Should be 32-bit 4-byte sign-less
typedef    signed long long    si64;     // Should be 32-bit 4-byte sign-ful
typedef    long long            i64;     // Should be 32-bit 4-byte auto

typedef    unsigned int        ui32;     // Should be 32-bit 4-byte sign-less
typedef    signed   int        si32;     // Should be 32-bit 4-byte sign-ful
typedef    int                  i32;     // Should be 32-bit 4-byte auto

typedef    unsigned short      ui16;     // Should be 16-bit 2-byte sign-less
typedef    signed   short      si16;     // Should be 16-bit 2-byte sign-ful
typedef    short                i16;     // Should be 16-bit 2-byte auto

typedef    unsigned char        ui8;     // Should be 16-bit 2-byte sign-less
typedef    signed   char        si8;     // Should be 16-bit 2-byte sign-ful
typedef    char                  i8;     // Should be 16-bit 2-byte auto

typedef    double               f64;     // Should be 64-bit 8-byte float
typedef    float                f32;     // Should be 32-bit 4-byte float

typedef    char              csbool;     // Boolean value, no matter what
const      csbool csTrue = 1;
const      csbool csFalse = 0;

#define    csNull               NULL
#define    csNullPtr         nullptr





static ui32 CompileShader(ui32 shaderType, const string& shaderCode){
	ui32 shaderID = glCreateShader(shaderType);
	const char* code_cstr = shaderCode.c_str();
	glShaderSource(shaderID, 1, &code_cstr, nullptr);
	glCompileShader(shaderID);

	// Get the compiling status
	i32 result;
	glGetShaderiv(shaderID, GL_COMPILE_STATUS, &result);

	// If there is at least one error
	if(result == GL_FALSE){
		// Get the Length of the Error Message
		i32 length;
		glGetShaderiv(shaderID, GL_INFO_LOG_LENGTH, &length);

		// Get the Error Message itself
		char* message = new char[length];
		glGetShaderInfoLog(shaderID, length, &length, message);

		// Output the error message
		cout << "Failed to compile "
		     << (shaderType == GL_VERTEX_SHADER ? "Vertex" : "Fragment")
			 << " Shader." << endl
			 << message << endl;

		// Return an empty shader
		glDeleteShader(shaderID);
		return 0;
	}

	return shaderID;
}

static ui32 CreateShader(const string& vertexShader, const string& fragmentShader){
	ui32 programID = glCreateProgram();
	ui32 vsID = CompileShader(GL_VERTEX_SHADER, vertexShader);
	ui32 fsID = CompileShader(GL_FRAGMENT_SHADER, fragmentShader);

	glAttachShader(programID, vsID);
	glAttachShader(programID, fsID);
	glLinkProgram(programID);
	glValidateProgram(programID);

	glDeleteShader(vsID);
	glDeleteShader(fsID);

	return programID;
}

// Create a buffer ptr saver
ui32 bufferID;
ui32 shaderID;

// Define our Vericies
float positions[6] = {
	 0.0f, -0.5f,
	-0.5f,  0.5f,
	 0.5f,  0.5f
};

void Setup()
{
    // Generate a buffer in GPU
	glGenBuffers(1, &bufferID);

    // Select the buffer in GPU and send data to it
	glBindBuffer(GL_ARRAY_BUFFER, bufferID);
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

	shaderID = CreateShader(vertexShader, fragmentShader);
	glUseProgram(shaderID);
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
	glDeleteProgram(shaderID);
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