/*****************************************************************************************************
 * Lecture sample code.
 *****************************************************************************************************
 * Author: Marc Hensel, http://www.haw-hamburg.de/marc-hensel
 * Project: https://github.com/MarcOnTheMoon/imaging_learners/
 * Copyright: 2023, Marc Hensel
 * Version: 2023.09.05
 * License: CC BY-NC-SA 4.0, see https://creativecommons.org/licenses/by-nc-sa/4.0/deed.en
 *****************************************************************************************************/

 /* Compiler settings */
#define _CRT_SECURE_NO_WARNINGS		// Enable getenv()

/* Include files */
#include <iostream>
#include <string>
#include <opencv2/opencv.hpp>

/* Defines */
#define DATA_ROOT_PATH getenv("ImagingData")  // Read environment variable
#define INPUT_FILE "/Videos/SoccerShot.mp4"

/* Namespaces */
using namespace cv;
using namespace std;

/* Main function */
int main(void) {
	// Open video file
	string inputVideoPath = string(DATA_ROOT_PATH).append(INPUT_FILE);
	VideoCapture camera(0);

	Mat frame;

	while (true) {
		if (!camera.isOpened())
			break;

		camera >> frame;
		imshow("Frames", frame);

		if (waitKey(10) >= 0)
			break;
	}

	return 0;
}
