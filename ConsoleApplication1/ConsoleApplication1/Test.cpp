#include "stdafx.h"
#include <opencv2/opencv.hpp>

using namespace cv;

int main()
{
	Mat file1 = imread("lena.jpg", CV_LOAD_IMAGE_UNCHANGED);
	Mat file2 = imread("lena.jpg", CV_LOAD_IMAGE_GRAYSCALE);

	namedWindow("Color", CV_WINDOW_FREERATIO);
	namedWindow("Fixed", CV_WINDOW_AUTOSIZE);

	imshow("Color", file1);
	imshow("Fixed", file2);

	//resizeWindow("Unchanged", unchanged.cols/2, unchanged.rows/2);
	//resizeWindow("Fixed", gray.cols/2, gray.rows/2);

	moveWindow("Color", 500, 200);
	moveWindow("Fixed", 500 + file1.cols + 5, 200);

	waitKey(0);
}