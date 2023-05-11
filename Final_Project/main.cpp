#include <stdio.h>
#include <GL/glut.h>
#include "glm.h"

GLMmodel * head=NULL;
GLMmodel * body=NULL;
GLMmodel * rightUpHand=NULL;
GLMmodel * rightDownHand=NULL;

int show[4]={1,0,0,0};
float teapotX=0,teapotY=0;
FILE * fout=NULL;
FILE * fin=NULL;
void keyboard(unsigned char key,int x,int y)
{
    if(key=='1') show[0]=!show[0];
    if(key=='2') show[1]=!show[1];
    if(key=='3') show[2]=!show[2];
    if(key=='4') show[3]=!show[3];
    glutPostRedisplay();
}
void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);

    if(head==NULL)
    {
        head=glmReadOBJ("model/head.obj");
        body=glmReadOBJ("model/body.obj");
        rightUpHand=glmReadOBJ("model/rightUpHand.obj");
        rightDownHand=glmReadOBJ("model/rightDownHand.obj");
    }
    glPushMatrix();
        glScalef(0.3 , 0.3 , 0.3);
        if(show[0]) glmDraw(head,GLM_MATERIAL);
        if(show[1]) glmDraw(body,GLM_MATERIAL);
        if(show[2]) glmDraw(rightUpHand,GLM_MATERIAL);
        if(show[3]) glmDraw(rightDownHand,GLM_MATERIAL);
    glPopMatrix();

    glutSwapBuffers();
}
void mouse(int button,int state,int x,int y)
{
    teapotX=(x-150)/150.0;
    teapotY=(150-y)/150.0;
    if(state==GLUT_DOWN)
    {
        if(fout==NULL) fout=fopen("file4.txt","w");
        fprintf(fout,"%f %f\n",teapotX,teapotY);
    }
    display();
}

int main(int argc,char** argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_DEPTH);
    glutCreateWindow("week13");

    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);
    glutMouseFunc(mouse);

    glutMainLoop();
}