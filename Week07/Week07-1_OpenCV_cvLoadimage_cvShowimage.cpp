#include <opencv/highgui.h>
int main()
{
    IplImage*img=cvLoadImage("image.jpg"); ///圖檔要跟程式在同目錄
    cvShowImage("Week07",img);
    cvWaitKey(0); ///讓畫面不閃退,按任意鍵繼續
}
