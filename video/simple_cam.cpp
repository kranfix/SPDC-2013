#include "cv.h"
#include "highgui.h"

using namespace cv; //mala praxis!!

int main(int, char**)
{
  //VideoCapture cap(0);
  VideoCapture cap("http://192.168.1.100:8080/video");
  if(!cap.isOpened()) return -1;
  Mat frame;
  namedWindow("SPDC-2013",1);
  for(;;)//For infinito
  {
    cap >> frame;
    imshow("SPDC-2013", frame);
    if(waitKey(30) >= 0) break;
  }
  return 0;
}
