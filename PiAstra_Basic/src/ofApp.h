#pragma once

#include "ofMain.h"
#include "ofxOrbbecAstraPro.h"
#include "ofxXmlSettings.h"

class ofApp : public ofBaseApp {

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);

		ofxOrbbecAstraPro astraCam;

	    ofxXmlSettings XML;

    	int width, height, fps;
	    bool doColor, doDepth, doIr, registered;

};
