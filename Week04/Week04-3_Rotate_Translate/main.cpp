#include <GL/glut.h>
float angle=0;
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);///清畫面
    glPushMatrix(); ///備份矩陣
        glTranslatef(0.5,0,0); ///往右移動
        glRotatef(angle,0,1,0); ///轉angle度
        glColor3f(0,0,1); ///藍
        glutSolidTeapot(0.3);
    glPopMatrix(); ///還原矩陣

    glPushMatrix(); ///備份矩陣
        glRotatef(angle,0,1,0); ///轉angle度
        glTranslatef(0.5,0.5,0); ///往右上移動
        glColor3f(1,1,0); ///黃
        glutSolidTeapot(0.3);
    glPopMatrix(); ///還原矩陣

    glutSwapBuffers();
    angle++;
}
int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("Week04");

    glutDisplayFunc(display);
    glutIdleFunc(display);   ///時不時重畫畫面

    glutMainLoop();
}
