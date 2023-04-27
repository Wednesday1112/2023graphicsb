#include <GL/glut.h>
void display()
{
    glColor3f(1,1,0);     ///茶壺顏色(r,g,b)
    glutSolidTeapot(0.5); ///茶壺圖形(大小)

    glColor3f(0,1,0);
    glutSolidTeapot(0.3);

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
