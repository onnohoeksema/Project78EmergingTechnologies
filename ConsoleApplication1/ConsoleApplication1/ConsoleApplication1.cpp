// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<opencv2/opencv.hpp>
#include<iostream>
#include "opencv2/objdetect.hpp"
#include "opencv2/highgui.hpp"
#include "opencv2/imgproc.hpp"

using namespace std;
using namespace cv;

/** Function Headers */
void detectAndDisplay(Mat frame);

/** Global variables */
String coffeecup_cascade_name = "mycoffeecupdetector.xml";
CascadeClassifier coffeecup_cascade;
String window_name = "Capture - coffeecup detection";


/** @function main */
int main(int argc, const char** argv)
{
	VideoCapture capture;
	Mat frame;

	//-- 1. Load the cascades
	if (!coffeecup_cascade.load(coffeecup_cascade_name)) { printf("--(!)Error loading coffeecup cascade\n"); return -1; };

	//-- 2. Read the video stream
	capture.open(0);
	if (!capture.isOpened()) { printf("--(!)Error opening video capture\n"); return -1; }

	while (capture.read(frame))
	{
		if (frame.empty())
		{
			printf(" --(!) No captured frame -- Break!");
			break;
		}

		//-- 3. Apply the classifier to the frame
		detectAndDisplay(frame);

		if (waitKey(10) == 27) { break; } // escape
	}
    return 0;
}

/** @function detectAndDisplay */
void detectAndDisplay(Mat frame)
{
	std::vector<Rect> coffeecups;
	Mat frame_gray;

	cvtColor(frame, frame_gray, COLOR_BGR2GRAY);
	equalizeHist(frame_gray, frame_gray);

	//-- Detect coffeecups
	coffeecup_cascade.detectMultiScale(frame_gray, coffeecups, 1.1, 2, 0 | CASCADE_SCALE_IMAGE, Size(60, 60));

	for (size_t i = 0; i < coffeecups.size(); i++)
	{
		Point center(coffeecups[i].x + coffeecups[i].width / 2, coffeecups[i].y + coffeecups[i].height / 2);
		ellipse(frame, center, Size(coffeecups[i].width / 2, coffeecups[i].height / 2), 0, 0, 360, Scalar(255, 0, 255), 4, 8, 0);
	}

	//-- Show what you got
	imshow(window_name, frame);
}

