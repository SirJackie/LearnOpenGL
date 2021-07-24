#include <GL/glew.h>
#include <GL/glut.h>
#include <stdio.h>
#include <stdlib.h>

void Setup()
{
    ;  // Do Nothing
}

void Update()
{
    // Clear the screen
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    
    // Draw a triangle using APIs that are earlier that 1997
    // Which will be replaced soon
    glBegin(GL_TRIANGLES);
    glVertex2f(0.0f, 0.0f);
    glVertex2f(0.0f, 0.8f);
    glVertex2f(0.6f, 0.0f);
    glEnd();

    // Forcely Update the FrontBuffer
    glFlush();
}
    
int main(int argc, char** argv)
{
    // Init GLUT
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);

    // Create a window
    glutInitWindowSize(1000, 500);
    glutInitWindowPosition(30, 30);
    glutCreateWindow(argv[0]);

    // Init GLEW ---AFTER CREATING A WINDOW--- !!! (This is very important!)
    if(glewInit() != GLEW_OK){
        printf("Error when initializing glew!\n");
        return -1;
    }
    
    // Run our custom Setup() function
    Setup();
    // Bind our update function to GLUT
    glutDisplayFunc ( Update );
    // Run our update function every frame
    glutMainLoop( );

    // Return after closing the window
    return 0;
} 