#include <GL/glut.h>
float angle=0;
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);///�M�e��

    glColor3f(1,0,0); ///��
    glPushMatrix(); ///�ƥ��x�}
        glRotatef(angle,0,0,1); ///��angle��
        glTranslatef(0.8,0,0); ///��k��
        glutSolidTeapot(0.3);
    glPopMatrix(); ///�٭�x�}

    glColor3f(0,1,0); ///��
    glPushMatrix(); ///�ƥ��x�}
        glTranslatef(0.8,0,0); ///��k��
        glRotatef(angle*1.5,0,0,1); ///��angle��(����)
        glutSolidTeapot(0.3);
    glPopMatrix(); ///�٭�x�}

    glutSwapBuffers();
    angle++;
}
int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("Week04");

    glutDisplayFunc(display);
    glutIdleFunc(display);   ///�ɤ��ɭ��e�e��

    glutMainLoop();
}