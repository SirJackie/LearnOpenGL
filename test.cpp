#include <GL/glut.h>
#include <stdlib.h>

void Setup()
{
    ;  // Do Nothing
}

void Update()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    
    glBegin(GL_TRIANGLES);
    glVertex2f(0.0f, 0.0f);
    glVertex2f(0.0f, 0.8f);
    glVertex2f(0.6f, 0.0f);
    glEnd();

    glFlush();
}
    
int main(int argc, char** argv)
{
    /* GLUT环境初始化*/
    glutInit (&argc, argv);
    /* 显示模式初始化 */
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
    /* 定义窗口大小 */
    glutInitWindowSize (1000, 500);
    /* 定义窗口位置 */
    glutInitWindowPosition (30, 30);
    /* 显示窗口，窗口标题为执行函数名 */
    glutCreateWindow ( argv [ 0 ] );
    /* 调用自定义初始化函数 */
    Setup();
    /* 注册自定义绘图函数 */
    glutDisplayFunc ( Update );
    // /* 进入GLUT消息循环，开始执行程序 */
    glutMainLoop( );
    return 0;
} 