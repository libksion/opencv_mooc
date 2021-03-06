#include<opencv2\opencv.hpp>
#include<iostream>
using namespace cv;

int main()
{
	VideoCapture cap;
	cap.open(0);

	if (!cap.isOpened()) {
		std::cout << "不能打开视频" << std::endl;
		return -1;
	}

	double fps = cap.get(CAP_PROP_FPS);//用get获取cap的帧
	std::cout << "fps" << fps << std::endl;

	while (1) {
		cv::Mat frame;
		bool rSucess = cap.read(frame);
		if (!rSucess)
		{
			std::cout << "不能从视频里读取帧" << std::endl;
			break;
		}
		else
		{
			cv::imshow("frame", frame);
		}
		waitKey(10);
	}
}