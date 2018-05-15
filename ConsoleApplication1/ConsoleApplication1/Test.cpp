#include "stdafx.h"
#include "opencv2/opencv.hpp"
#include <stdint.h>

using namespace cv;
using namespace std;

int main()
{
	Mat original = imread("lena.jpg", CV_LOAD_IMAGE_COLOR);
	Mat modified = imread("lena.jpg", CV_LOAD_IMAGE_COLOR);


	for (int r = 0; r < modified.rows; r++)
	{
		for (int c = 0; c < modified.cols; c++)
		{
			//modified.at<uint8_t>(r, c) = modified.at<uint8_t>(r, c) * 0.5f;
			modified.at<Vec3b>(r, c)[1] = modified.at<Vec3b>(r, c)[1] * 0;
		}
	}
	
	imshow("Original", original);
	imshow("Modified", modified);

	waitKey(0);
}