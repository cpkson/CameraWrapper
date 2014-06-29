/*
 * Camera.cpp
 *
 *  Created on: 29 Jun 2014
 *      Author: Craig Parkinson
 */

#include "Camera.h"
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>

using namespace cv;

Mat frame;
int cameraValue;
CvCapture* capture;

Camera::Camera()
{
	cameraValue = 0;
	setCamera(cameraValue);
}

Camera::~Camera()
{

}

void Camera::setCamera(int camera)
{
	cameraValue = camera;
	capture = cvCaptureFromCAM(cameraValue);
}

int Camera::getCamera()
{
	return cameraValue;
}

void Camera::setFrame()
{
	frame = cvQueryFrame(capture);
}

Mat Camera::getFrame()
{
	return frame;
}
