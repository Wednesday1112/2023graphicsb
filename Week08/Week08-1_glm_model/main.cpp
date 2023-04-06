#include <GL/glut.h>
#include "glm.h"
GLMmodel * pmodel = NULL; ///��l��NULL
void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);

    if(pmodel==NULL) ///�Ĥ@���|Ū�ɮ�
    {
        pmodel=glmReadOBJ("F-16.obj"); ///��誺�ɦW
        glmUnitize(pmodel); ///�Y��Unit���j�p(-1 ~ +1)
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
