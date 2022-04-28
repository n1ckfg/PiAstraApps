#include "ofApp.h"

//------------------------------------------------------------------------
void ofApp::setup()
{
	astraCam.setup();
	astraCam.setRegistration(true);
	astraCam.initSelectedStreams(true, true, false);
}
//------------------------------------------------------------------------
void ofApp::update()
{
	astraCam.update();
	if (astraCam.isFrameNew())
	{
		// Do something fun.
	}
}
//------------------------------------------------------------------------
void ofApp::draw()
{
	astraCam.drawDepth(0, 0, 360, 480);
	astraCam.draw(360, 0, 720, 480);
}
//------------------------------------------------------------------------
void ofApp::keyPressed(int key)
{
	// Poll events here!
}
//------------------------------------------------------------------------