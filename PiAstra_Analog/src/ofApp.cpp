#include "ofApp.h"

//------------------------------------------------------------------------
void ofApp::setup() {
	XML.loadFile("settings.xml");
	width = XML.getValue("settings:width", 640);
	height = XML.getValue("settings:height", 480);
	fps = XML.getValue("settings:fps", 30);;
	doDepth = ofToBool(XML.getValue("settings:doDepth", "true"));
	doColor = ofToBool(XML.getValue("settings:doColor", "true")) ;
	registered = ofToBool(XML.getValue("settings:registered", "true"));

	astraCam.setup(width, height);
	astraCam.setRegistration(registered);
	astraCam.initSelectedStreams(doColor, doDepth, false); // color, depth, point (?)
}

//------------------------------------------------------------------------
void ofApp::update() {
	astraCam.update();
	if (astraCam.isFrameNew()) {
		// Do something fun.
	}
}

//------------------------------------------------------------------------
void ofApp::draw() {
	if (doColor) {
		astraCam.drawDepth(0, 0, 360, 480);
		astraCam.draw(360, 0, 720, 480);
	} else {
		astraCam.drawDepth(0, 0, 720, 480);
	}
}

//------------------------------------------------------------------------
void ofApp::keyPressed(int key) {
	// Poll events here!
}
//------------------------------------------------------------------------
