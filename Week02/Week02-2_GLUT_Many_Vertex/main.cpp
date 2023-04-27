#include <GL/glut.h>
void display()
{
    glBegin(GL_POLYGON); ///開始畫
        glColor3f(1,0,0); glVertex2f(0,1);  ///上頂點
        glColor3f(0,1,0); glVertex2f(-1,-1);///左下頂點
        glColor3f(0,0,1); glVertex2f(1,-1); ///右下頂點
    glEnd();  ///結束畫

    glColor3f(1,1,0);     ///茶壺顏色(r,g,b)
    glutSolidTeapot(0.3); ///茶壺圖形(大小)

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
