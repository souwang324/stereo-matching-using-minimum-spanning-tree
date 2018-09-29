#pragma once

#include "targetver.h"

#include <iostream>
#include <cstring>
#include <vector>

#include <opencv2/opencv.hpp>

#include "FourDirectionGraph.h"

using namespace std;
using namespace cv;

#define GRAY_SCALE_IMAGE 0

#define CONES_NAME "cones"
#define CONES_LEFT "cones_img_0.png"
#define CONES_RIGHT "cones_img_1.png"
#define CONES_RESULT "cones_disp.png"

#define TEDDT_NAME "teddy"
#define TEDDY_LEFT "teddy_img_0.png"
#define TEDDY_RIGHT "teddy_img_1.png"
#define TEDDY_RESULT "teddy_disp.png"

#define TSUKUBA_NAME "tsukuba"
#define TSUKUBA_LEFT "tsukuba_img_0.png"
#define TSUKUBA_RIGHT "tsukuba_img_1.png"
#define TSUKUBA_RESULT "tsukuba_disp.png"

#define VENUS_NAME "venus"
#define VENUS_LEFT "venus_img_0.png"
#define VENUS_RIGHT "venus_img_1.png"
#define VENUS_RESULT "venus_disp.png"

typedef string test_name;
typedef string left_image_path;
typedef string right_image_path;
typedef string result_path;

struct TestDataInfo {
	test_name testName;
	left_image_path leftImagePath;
	right_image_path rightImagePath;
	result_path resultPath;

	TestDataInfo(const test_name testName, const left_image_path leftImagePath,
	             const right_image_path rightImagePath, const result_path resultPath) {
		this->testName = testName;
		this->leftImagePath = leftImagePath;
		this->rightImagePath = rightImagePath;
		this->resultPath = resultPath;
	}
};

void initializeTestDataset(vector<TestDataInfo>& dataset);
