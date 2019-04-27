#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetVerticalSync(true);
    ofBackgroundHex(0xffffff);
    ofSetLogLevel(OF_LOG_NOTICE);
    
    box2d.init();
    box2d.setGravity(0, 0);
    box2d.createBounds();
    box2d.setFPS(60.0);
    box2d.registerGrabbing();
    
    upGravityButton.set(50, 50, 100, 50);
    downGravityButton.set(155, 50, 100, 50);
    upGravityButtonClicked = false;
    downGravityButtonClicked = false;
}

//--------------------------------------------------------------
void ofApp::update(){
    box2d.update();
    
    if (upGravityButtonClicked){
        downGravityButtonClicked = false;
        box2d.setGravity(0, -5);
    } else if (downGravityButtonClicked) {
        upGravityButtonClicked = false;
        box2d.setGravity(0, 5);
    } else {
        upGravityButtonClicked = false;
        downGravityButtonClicked = false;
        box2d.setGravity(0, 0);
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    for(int i=0; i<circles.size(); i++) {
        ofFill();
        ofSetHexColor(hexColors[count % hexColors.size()]);
        count++;
        circles[i].get()->draw();
    }
    
    box2d.drawGround();
    
    
    if (upGravityButtonClicked) {
        ofFill();
        ofSetColor(ofColor::lightGreen);
    } else {
        ofFill();
        ofSetColor(ofColor::lightCoral);
    }
    ofDrawRectangle(upGravityButton);
    
    if (downGravityButtonClicked) {
        ofFill();
        ofSetColor(ofColor::lightGoldenRodYellow);
    } else {
        ofFill();
        ofSetColor(ofColor::lightCoral);
    }
    ofDrawRectangle(downGravityButton);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if(key == 'b') {
        float r = ofRandom(40, 60);
        circles.push_back(shared_ptr<ofxBox2dCircle>(new ofxBox2dCircle));
        circles.back().get()->setPhysics(2.0, 0.6, 0);
        circles.back().get()->setup(box2d.getWorld(), mouseX, mouseY, r);
        
        r = ofRandom(40, 60);
        circles.push_back(shared_ptr<ofxBox2dCircle>(new ofxBox2dCircle));
        circles.back().get()->setPhysics(2.0, 0.6, 0);
        circles.back().get()->setup(box2d.getWorld(), mouseX, mouseY, r);
        
        r = ofRandom(40, 60);
        circles.push_back(shared_ptr<ofxBox2dCircle>(new ofxBox2dCircle));
        circles.back().get()->setPhysics(2.0, 0.6, 0);
        circles.back().get()->setup(box2d.getWorld(), mouseX, mouseY, r);
    }
    
    if(key == 't') ofToggleFullscreen();
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
    //https://gist.github.com/firmread/10641924
    if (upGravityButton.inside(x, y)) {
        upGravityButtonClicked = !upGravityButtonClicked;
    }
    
    if (downGravityButton.inside(x, y)) {
        downGravityButtonClicked = !downGravityButtonClicked;
    }
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
