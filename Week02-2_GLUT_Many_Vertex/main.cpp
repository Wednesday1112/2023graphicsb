#include <GL/glut.h>
void display()
{
    glBegin(GL_POLYGON); ///�}�l�e
        glColor3f(1,0,0); glVertex2f(0,1);  ///�W���I
        glColor3f(0,1,0); glVertex2f(-1,-1);///���U���I
        glColor3f(0,0,1); glVertex2f(1,-1); ///�k�U���I
    glEnd();  ///�����e

    glColor3f(1,1,0);     ///�����C��(r,g,b)
    glutSolidTeapot(0.3); ///�����ϧ�(�j�p)

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
