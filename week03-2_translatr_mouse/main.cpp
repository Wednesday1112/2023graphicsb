#include <GL/glut.h>
float X=0,Y=0,Z=0;
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); ///�R���I��
    glPushMatrix();  ///�ƥ��x�}
        glTranslatef(X,Y,Z);
        glColor3f(255/255.0,220/255.0,116/255.0);
        glutSolidTeapot(0.3);
    glPopMatrix();  ///�٭�x�}

    glutSwapBuffers();
}
void mouse(int button,int state,int x,int y)
{      ///   ��/��/�k��  ���U/��}
    X=  (x-150)/150.0;  ///��@�b�B���@�b
    Y= -(y-150)/150.0;  ///y�ܭt��
}
int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("Week02");

    glutMouseFunc(mouse);
    glutDisplayFunc(display);

    glutMainLoop();
}
