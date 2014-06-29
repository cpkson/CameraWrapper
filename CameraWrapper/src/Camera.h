/*
 * Camera.h
 *
 *  Created on: 29 Jun 2014
 *      Author: craig
 */

#ifndef CAMERA_H_
#define CAMERA_H_

#include <opencv2/core/core.hpp>
using namespace cv;

class Camera
{
	public:
		Camera();
		void setCamera(int camera);
		int getCamera();
		void setFrame();
		Mat getFrame();
		virtual ~Camera();
};

#endif /* CAMERA_H_ */
