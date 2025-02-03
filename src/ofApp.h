#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{
	private:
		std::vector <int> circles;

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		void bubbleSort(std::vector<int>& bubbleArray);
		void insertionSort(std::vector<int>& insertArray);
		void mergeSort(std::vector<int>& mergeArray, int left, int right);
		void quickSort(std::vector<int>& quickArray, int low, int high);
		void fisherYatesShuffle(std::vector<int>& arrayShuffle);
};
