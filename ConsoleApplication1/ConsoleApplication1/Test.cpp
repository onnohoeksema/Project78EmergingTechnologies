#include "stdafx.h"
#include <opencv2/opencv.hpp>

using namespace cv;

int main()
{
	Mat testColor = imread("lena.jpg", CV_LOAD_IMAGE_COLOR);
	Mat testGray = imread("lena.jpg", CV_LOAD_IMAGE_GRAYSCALE);

	imshow("color", testColor);
	imshow("gray", testGray);

	imwrite("outputGray.jpg", testGray);

	waitKey(0);
}