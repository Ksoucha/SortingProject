#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	//Remove all elements from circles[]
	circles.clear();

	//Generate random numbers
	std::cout << std::endl;
	std::srand(std::time(0));
	for (int i = 0; i < 5; i++) 
	{
		int n = std::rand() % 91 + 10;
		circles.push_back(n);
		std::cout << " " << n;
	}
}

//--------------------------------------------------------------
void ofApp::update(){
	
}

//--------------------------------------------------------------
void ofApp::draw(){
	for (int i = 0; i < circles.size(); i++) 
	{
		ofSetColor(ofColor::white);
		ofDrawCircle(100 + i * 200, 200, circles[i]);
		ofSetColor(ofColor::black);
		ofDrawBitmapString(ofToString(circles[i]), 100 + i * 200, 200);
	}
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	if (key == 'r') 
	{
		//regenerer nombres et cercles
		ofApp::setup();
		ofApp::draw();
	}
	else if (key == 'b') 
	{
		//call bubble sort et afficher cercles tries
		ofApp::bubbleSort(circles);
	}
	else if (key == 'i')
	{
		//call insertion sort et afficher cercles tries
		ofApp::insertionSort(circles);
	}
	else if (key == 'm')
	{
		//call merge sort et afficher cercles tries
		ofApp::mergeSort(circles, 0, circles.size() - 1);
	}
	else if (key == 'q')
	{
		//call quick sort et afficher cercles tries
		ofApp::quickSort(circles, 0, circles.size() - 1);
	}
	else if (key == 's')
	{
		//algorithme Fisher-Yates, shuffle circles[] randomly
		ofApp::fisherYatesShuffle(circles);
	}
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
