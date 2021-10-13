#include <opencv2/highgui.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;
                                 // video
//void main() {
//
//	string path = "C:/Users/60844/Downloads/VID_20200307_161439_HSR_120.mp4";
//	VideoCapture cap(path);
//	Mat img;
//
//	while (true) {
//
//		cap.read(img);
//		imshow("image", img);
//		waitKey(10);
//	
//	}
//}

                                                    // webcam

void main() {

    VideoCapture cap(0);
    Mat img;

    while (true) {
        cap.read(img);
        imshow("image", img);
        waitKey(1);
    }
}