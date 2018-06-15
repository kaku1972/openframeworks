#include "ofApp.h"
#include "ofxGui.h"
#include "ofxXmlSettings.h"


//--------------------------------------------------------------
void ofApp::setup(){
    ofEnableAlphaBlending();
    ofSetCircleResolution(64);
    ofBackground(0, 0, 0);

    settings.loadFile("settings.xml");
    framerate = settings.getValue("settings:framerate", 0);
    increaserate = settings.getValue("settings:increaserate", 0);
    
    ofSetFrameRate(framerate);

    positionX = 0;
    positionY = 0;
    rad = 0;
    
    // colorの初期値、最小値、最大値
    ofColor initColor = ofColor(0, 127, 255, 100);
    ofColor minColor = ofColor(0,0,0,0);
    ofColor maxColor = ofColor(255,255,255,255);
    
    // positionの初期値、最小値、最大値
    ofVec2f initPos = ofVec2f(ofGetWidth()/2, ofGetHeight()/2);
    ofVec2f minPos = ofVec2f(0,0);
    ofVec2f maxPos = ofVec2f(ofGetWidth(),ofGetHeight());
    
    gui.setup();
    gui.add(radius.setup("radius", 200, 0, 400));
    gui.add(color.setup("color", initColor, minColor, maxColor));
    gui.add(position.setup("position", initPos, minPos, maxPos));
    
}

//--------------------------------------------------------------
void ofApp::update(){
    positionX = positionX + 10;
    positionY = positionY + 10;

    if (rad<=400) {
        rad = rad + increaserate;
    }
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(225, 225, 225, 100);
    
    ofDrawCircle(960, 540, rad);
    
//    for(int i = 0; i <= 100; i++){
//        int num_x = rand() % 700;
//        int num_y = rand() % 700;
//        ofCircle(positionX+num_x, positionY+num_y, 20);
//    }
    
    for (int i = 0; i<=100; i++) {
        ofSetColor(color);
        ofCircle(ofGetWidth()/2, ofGetHeight()/2, 10);
    }
    
//    ofxXmlSettings settings;
//    settings.setValue("settings:blinkRate", 10, 1, 2, 3);
//    settings.setValue("settings:gravity", 9.8);
//    settings.setValue("settings:sceneName", "field");
//    settings.saveFile("set.xml");
//    gui.draw();

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
