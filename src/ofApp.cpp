#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    blur.setupRGB(videoWidth, videoHeight);
    blur.setMode(3);
    parameters.setName("settings");
    parameters.add(blur.parametersRGB);
    gui.setup(parameters);
    gui.loadFromFile("settings.xml");

    bypass = false; //bypass shader;

    // VIDEO
    video.load("01.mp4");
    video.setLoopState(OF_LOOP_NORMAL);
    video.play();
}


//--------------------------------------------------------------
void ofApp::update(){
    video.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
    if(applyBlur){
        blur.begin();
        video.draw(0, 0, videoWidth, videoHeight);
        blur.endRGB();
    }else{
        video.draw(0, 0, videoWidth, videoHeight);
    }

    if(drawGui){
        gui.draw();
    }
}



//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if(key == 'g'){
        drawGui = !drawGui;
    }

    if(key == 'b'){
        applyBlur = !applyBlur;
    }


    if(key == ' '){
        bypass = !bypass;
        blur.setBypass(bypass);
    }
    else if(key == '0'){
        blur.setMode(0);
    }
    else if(key == '1'){
        blur.setMode(1);
    }
    else if(key == '2'){
        blur.setMode(2);
    }
    else if(key == '3'){
        blur.setMode(3);
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
