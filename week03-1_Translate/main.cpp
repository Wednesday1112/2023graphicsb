#include <GL/glut.h>
void display()
{
    glPushMatrix();  ///�ƥ��x�}
        glTranslatef(0.5,0.5,0);
        glColor3f(255/255.0,220/255.0,116/255.0);
        glutSolidTeapot(0.3);
    glPopMatrix();  ///�٭�x�}

    glutSwapBuffers();
}
int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("Week02");

    glutDisplayFunc(display);

    glutMainLoop();
}
