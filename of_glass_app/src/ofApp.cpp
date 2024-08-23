#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofClear(0.0f, 0.0f, 0.0f, 0.0f);
    ofDrawBitmapStringHighlight("Everything works!", 20, 20);
    
    int width = ofGetWidth();
    int height = ofGetHeight();
    
    ofSetColor(0x000000);
    ofDrawLine(0, 0, 0, height);
    ofDrawLine(width, 0, width, height);
    ofDrawLine(0, height, width, height);

    // Draw 100 circles
    for(int i = 0; i < 100; i++) {
        // Set animation speed
        float speed = 2.0;

        // set left-to-right oscillation
        float sinX = sin(i + ofGetElapsedTimef() * speed) * 100;

        // set opacity of each circle
        float sinAlpha = ofMap(sin(i + ofGetElapsedTimef() * speed),-1, 1, 0, 200);

        // set radius of each circle
        float sinRadius = ofMap(sin(i * ofGetElapsedTimef() * 0.05),-1, 1, 5, 30);

        // set color to white and opacity to sinAlpha
        ofSetColor(255,0,0,sinAlpha);

        // Finally draw each circle on window
        ofDrawCircle(sinX + ofGetWidth()*0.5, i * 10, sinRadius);
    }
}

//--------------------------------------------------------------
void ofApp::exit(){

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

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
void ofApp::mouseScrolled(int x, int y, float scrollX, float scrollY){

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
