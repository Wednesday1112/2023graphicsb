#include <GL/glut.h>
void display()
{
    glColor3f(255/255.0,199/255.0,116/255.0); ///����

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
