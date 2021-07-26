#include <GL/glew.h>
#include <GL/glut.h>
#include <iostream>
using std::cout;
using std::endl;

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





// Create a buffer ptr saver
ui32 buffer;

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

	// Return after closing the window
	return 0;
}