#include "stdafx.h"

int main() {
	vector<TestDataInfo> testDataset;
	initializeTestDataset(testDataset);

	for (vector<TestDataInfo>::iterator iter = testDataset.begin(); iter != testDataset.end(); ++iter) {
		Mat leftImage = imread(iter->leftImagePath, GRAY_SCALE_IMAGE);
		Mat rightImage = imread(iter->rightImagePath, GRAY_SCALE_IMAGE);
		Mat disparityResult;

		// TODO: some function used to implement strero mathcing and return a Mat called "disparityResult"

		// tanslate the referenced (left) image Mat to the four-direction-graph
		FourDirectionGraph fourDirectionGraph(leftImage);

		imwrite(iter->resultPath, disparityResult);
		cout << 1223 << endl;
	}

	waitKey();
	return 0;
}
