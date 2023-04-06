#include <GL/glut.h>
#include "glm.h"
GLMmodel * pmodel = NULL; ///初始為NULL
void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);

    if(pmodel==NULL) ///第一次會讀檔案
    {
        pmodel=glmReadOBJ("F-16.obj"); ///剛剛的檔名
        glmUnitize(pmodel); ///縮放Unit單位大小(-1 ~ +1)
    }
    glmDraw(pmodel, GLM_SMOOTH | GLM_MATERIAL);

    glutSwapBuffers();
}
int main(int argc, char**argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE|GL_DEPTH);
    glutCreateWindow("week08");

    glutDisplayFunc(display);
    glutMainLoop();
}
