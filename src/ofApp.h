#pragma once

#include "ofMain.h"
#include "ofxBlurUtils.h"
#include "ofxGui.h"

class ofApp : public ofBaseApp{

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


    // blur effect
    ofxBlurUtils blur;
    bool bypass;
    int mode;

    ofVideoPlayer video;
    int videoWidth = 1000;//1300;//1020;//800;
    int videoHeight = 563;//731;//574;//450;

    //gui
    bool drawGui = true;
    bool applyBlur = true;

    ofxPanel gui;
    ofParameter <float> freq;
    ofParameterGroup parameters;
    ofXml settings;

};
