#include "stdafx.h"

#include <iostream>
#include <vector>

#include <opencv2/opencv.hpp>

#include "TestDataset.hpp"
#include "StereoMatching.hpp"

using namespace std;
using namespace cv;

int main() {
	/*vector<TestDataset> vectorTestDataset;
	TestDataset::initializeTestDatasetVector(vectorTestDataset);

	for (vector<TestDataset>::iterator iter = vectorTestDataset.begin(); iter != vectorTestDataset.end(); ++iter) {
		const Mat leftImage = imread(iter->getLeftImagePath(), 0);
		const Mat rightImage = imread(iter->getRightImagePath(), 0);
		Mat disparity;
		float time;

		StereoMatching sm(leftImage, rightImage);
		sm.stereoMatchByMinimumSpanningTree(disparity, time);

		imwrite(iter->getResultPath(), disparity);
		cout << "For test set: " << iter->getTestName() << ", calculation time is " << time << "ms." << endl;
	}*/

	Mat m(3, 3, CV_8S);
	m.at<uchar>(0, 0) = 4;
	m.at<uchar>(0, 1) = 3;
	m.at<uchar>(0, 2) = 2;

	m.at<uchar>(1, 0) = 6;
	m.at<uchar>(1, 1) = 5;
	m.at<uchar>(1, 2) = 7;

	m.at<uchar>(2, 0) = 9;
	m.at<uchar>(2, 1) = 1;
	m.at<uchar>(2, 2) = 8;

	double t;
	StereoMatching sm(m, m);
	sm.stereoMatchByMinimumSpanningTree(m, t);
	cout << "calculation time is " << time << "ms." << endl;

	waitKey();
	return 0;
}
