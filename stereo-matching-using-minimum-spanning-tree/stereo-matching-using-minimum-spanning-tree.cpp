#include "stdafx.h"

int main() {
	vector<TestDataInfo> testDataset;
	initializeTestDataset(testDataset);

	for (vector<TestDataInfo>::iterator iter = testDataset.begin(); iter != testDataset.end(); ++iter) {
		const Mat leftImage = imread(iter->leftImagePath, GRAY_SCALE_IMAGE);
		const Mat rightImage = imread(iter->rightImagePath, GRAY_SCALE_IMAGE);
		Mat disparityResult;

		// TODO: some function used to implement strero mathcing and return a Mat called "disparityResult"

		// tanslate the referenced (left) image Mat to the four-direction-graph
		FourDirectionGraph fourDirectionGraph(leftImage);

		imwrite(iter->resultPath, disparityResult);
	}

	waitKey();
	return 0;
}
