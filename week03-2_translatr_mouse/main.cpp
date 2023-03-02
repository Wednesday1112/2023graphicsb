#include <GL/glut.h>
float X=0,Y=0,Z=0;
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); ///刪除背景
    glPushMatrix();  ///備份矩陣
        glTranslatef(X,Y,Z);
        glColor3f(255/255.0,220/255.0,116/255.0);
        glutSolidTeapot(0.3);
    glPopMatrix();  ///還原矩陣

    glutSwapBuffers();
}
void mouse(int button,int state,int x,int y)
{      ///   左/中/右鍵  按下/放開
    X=  (x-150)/150.0;  ///減一半、除一半
    Y= -(y-150)/150.0;  ///y變負的
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
