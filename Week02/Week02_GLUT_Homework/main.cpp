#include <GL/glut.h>
void display()
{
    glColor3f(255/255.0,199/255.0,116/255.0); ///薑黃

    glutSwapBuffers();    ///交換顯示
}
int main(int argc, char *argv[])
{
    glutInit(&argc, argv);  ///開始GLUT的功能
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);///顯示模式
    glutCreateWindow("Week02");  ///創建視窗 視窗名稱
    glutDisplayFunc(display);  ///顯示函式
    glutMainLoop();  ///主要迴圈(放最後)
}
