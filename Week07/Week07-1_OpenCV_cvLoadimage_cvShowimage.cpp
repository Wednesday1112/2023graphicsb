#include <opencv/highgui.h>
int main()
{
    IplImage*img=cvLoadImage("image.jpg"); ///���ɭn��{���b�P�ؿ�
    cvShowImage("Week07",img);
    cvWaitKey(0); ///���e�����{�h,�����N���~��
}
