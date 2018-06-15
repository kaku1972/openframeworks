#include "ofMain.h"
#include "ofApp.h"


//========================================================================
int main( ){
    
    ofxXmlSettings settings;
    settings.loadFile("settings.xml");
    int width = settings.getValue("settings:screenwidth", 0);
    int height = settings.getValue("settings:screenheight", 0);
	ofSetupOpenGL(width, height, OF_WINDOW);			// <-------- setup the GL context

	// this kicks off the running of my app
	// can be OF_WINDOW or OF_FULLSCREEN
	// pass in width and height too:
	ofRunApp(new ofApp());

}
