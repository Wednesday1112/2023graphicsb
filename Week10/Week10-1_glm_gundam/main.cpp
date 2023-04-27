#include <opencv/highgui.h> ///�ϥ� OpenCV 2.1 ���²��, �u�n�� High GUI �Y�i
#include <opencv/cv.h>
#include <GL/glut.h>
int myTexture(char * filename)
{
    IplImage * img = cvLoadImage(filename); ///OpenCVŪ��
    cvCvtColor(img,img, CV_BGR2RGB); ///OpenCV���m (�ݭncv.h)
    glEnable(GL_TEXTURE_2D); ///1. �}�ҶK�ϥ\��
    GLuint id; ///�ǳƤ@�� unsigned int ���, �s �K��ID
    glGenTextures(1, &id); /// ����Generate �K��ID
    glBindTexture(GL_TEXTURE_2D, id); ///�j�wbind �K��ID
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT); /// �K�ϰѼ�, �W�L�]�˪��d��T, �N���жK��
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT); /// �K�ϰѼ�, �W�L�]�˪��d��S, �N���жK��
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST); /// �K�ϰѼ�, ��j�ɪ�����, �γ̪��I
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST); /// �K�ϰѼ�, �Y�p�ɪ�����, �γ̪��I
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, img->width, img->height, 0, GL_RGB, GL_UNSIGNED_BYTE, img->imageData);
    return id;
}
#include <GL/glut.h>
#include "glm.h"
GLMmodel * pmodel = NULL; ///��l��NULL
GLMmodel * phand = NULL;
GLMmodel * pbody = NULL;
void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);

    if(phand==NULL)
    {
        phand=glmReadOBJ("hand_left.obj");
        glmUnitize(phand);
        glmFacetNormals(phand);
        glmVertexNormals(phand,90);
    }

    if(pbody==NULL)
    {
        pbody=glmReadOBJ("body.obj");
        glmUnitize(pbody);
        glmFacetNormals(pbody);
        glmVertexNormals(pbody,90);
    }

    if(pmodel==NULL) ///�Ĥ@���|Ū�ɮ�
    {
        pmodel=glmReadOBJ("Gundam.obj"); ///��誺�ɦW
        glmUnitize(pmodel); ///�Y��Unit���j�p(-1 ~ +1)
        glmFacetNormals(pmodel);
        glmVertexNormals(pmodel,90);
    }
    glmDraw(pmodel, GLM_SMOOTH | GLM_MATERIAL | GLM_TEXTURE);

    glutSwapBuffers();
}
int main(int argc, char**argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE|GL_DEPTH);
    glutCreateWindow("week08");

    myTexture("Diffuse.jpg");
    glEnable(GL_DEPTH_TEST);
    glutDisplayFunc(display);
    glutMainLoop();
}
