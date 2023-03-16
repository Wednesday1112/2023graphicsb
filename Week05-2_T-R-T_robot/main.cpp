#include <GL/glut.h>
float angle=0;
void myCube() ///手
{
    glPushMatrix();
        glScalef(0.5,0.2,0.2);
        glutSolidCube(1);
    glPopMatrix();
}
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glColor3f(1,1,1); ///綠色
    glutSolidCube(1); ///身體

    glPushMatrix();
        glTranslatef(0.5,0.5,0); ///右上角
        glRotatef(angle,0,0,1);
        glTranslatef(0.25,0,0); ///改變轉動中心
        glColor3f(0,1,0); ///綠色
        myCube(); ///手
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-0.5,0.5,0); ///左上角
        glRotatef(angle,0,0,1);
        glTranslatef(0.25,0,0); ///改變轉動中心
        glColor3f(0,1,0); ///綠色
        myCube(); ///手
    glPopMatrix();

    glutSwapBuffers();
    angle++;
}
int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("Week04");

    glutDisplayFunc(display);
    glutIdleFunc(display);

    glutMainLoop();
}
