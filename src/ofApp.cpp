#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	std::srand(std::time(0));
	for (int i = 0; i < 5; i++) 
	{
		int n = 10 + std::rand() % 90;
		circles.push_back(n);
	}
}

//--------------------------------------------------------------
void ofApp::update(){
	/*if (GetKeyState('A'))
	{

	}*/
}

//--------------------------------------------------------------
void ofApp::draw(){
	for (int i = 0; i < circles.size(); i++) 
	{
		ofDrawCircle(100 + i * 200, 200, circles[i]);
		std::cout << circles[i];
	}
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	if (key == 'r') 
	{
		;//regenerer nombres et cercles
	}
	else if (key == 'b') 
	{
		;//call bubble sort et afficher cercles tries
	}
	else if (key == 'i')
	{
		;//call insertion sort et afficher cercles tries
	}
	else if (key == 'm')
	{
		;//call merge sort et afficher cercles tries
	}
	else if (key == 'q')
	{
		;//call quick sort et afficher cercles tries
	}
	else if (key == 's')
	{
		;//algorithme Fisher-Yates
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
