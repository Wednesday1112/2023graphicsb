#include <GL/glut.h>
void display()
{
    glColor3f(1,1,0);     ///�����C��(r,g,b)
    glutSolidTeapot(0.5); ///�����ϧ�(�j�p)

    glColor3f(0,1,0);
    glutSolidTeapot(0.3);

    glutSwapBuffers();    ///�洫���
}
int main(int argc, char *argv[])
{
    glutInit(&argc, argv);  ///�}�lGLUT���\��
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);///��ܼҦ�
    glutCreateWindow("Week02");  ///�Ыص��� �����W��
    glutDisplayFunc(display);  ///��ܨ禡
    glutMainLoop();  ///�D�n�j��(��̫�)
}
