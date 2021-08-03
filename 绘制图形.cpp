#include<opencv2/opencv.hpp>
#include<iostream>
using namespace cv;

int main()
{
    cv::Mat dispMat = cv::imread("C:\\Users\\86186\\Desktop\\2.png");
	cv::Point pt;
	pt.x = 300;
	pt.y = 100;
	circle(dispMat, pt, 100, CV_RGB(255, 0, 0), 1, 8, 0);


	Point pt1, pt2;
	pt1.x = 50;
	pt1.y = 50;
	pt2.x = 80;
	pt2.y = 10;
	line(dispMat, pt1, pt2, (0, 255, 0), 6, 8, 0);

	Rect rect;
	rect.x = 10;
	rect.y = 10;
	rect.width = 20;
	rect.height = 30;
	rectangle(dispMat, rect, (0, 0, 255), 3, 8, 0);

	imshow("D", dispMat);

	waitKey(0);
}