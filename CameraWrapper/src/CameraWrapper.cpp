//============================================================================
// Name        : CameraWrapper.cpp
// Author      : Craig Parkinson
// Version     :
// Copyright   : © 2014 Craig Parkinson All Rights Reserved
// Description : main
//============================================================================

#include <iostream>
#include <stdio.h>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include "Camera.h"

using namespace std;
using namespace cv;

int main(int argc, const char *argv[])
{
	Camera camera1;
	camera1.setCamera(0);
		while(true)
		{
			camera1.setFrame();
			Mat frame = camera1.getFrame();
			if(!frame.empty())
			{
				imshow("testing",frame);
			}
			waitKey(33);
		}
	return 0;
}
