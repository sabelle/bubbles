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
    //buttons
    ofFill();
    if (upGravityButtonClicked) ofSetColor(ofColor::lightGreen);
    else ofSetColor(ofColor::lightCoral);
    ofDrawRectangle(upGravityButton);
    
    ofFill();
    if (downGravityButtonClicked) ofSetColor(ofColor::gold);
    else ofSetColor(ofColor::lightCoral);
    ofDrawRectangle(downGravityButton);
    
    string upLabel = "up";
    string downLabel = "down";
    ofSetHexColor(0xffffff);
    ofDrawBitmapString(upLabel, 92, 80);
    ofDrawBitmapString(downLabel, 186, 80);
    
    //legend
    string info = "key controls: \n[b] bubbles \n[s] squares \n[t] toggle";
    ofSetHexColor(0x56534f);
    ofDrawBitmapString(info, 50, 650);
    
    //shapes
    for(int i = 0; i < bubbles.size(); i++) {
        count++;
        ofSetHexColor(hexColors[count % hexColors.size()]);
        ofFill();
        bubbles[i].get()->draw();
    }
    
    for(int i = 0; i < squares.size(); i++) {
        ofSetHexColor(0xcdd4d8);
        ofFill();
        squares[i].get()->draw();
//        ofSetHexColor(0x56534f);
//        ofDrawBitmapString(quoteCollection[0], 92, 80);
    }
    
    //ground
    box2d.drawGround();
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if (key == 'b') {
        float r = ofRandom(40, 60);
        bubbles.push_back(shared_ptr<CustomParticle>(new CustomParticle));
        CustomParticle *bubbleParticle = bubbles.back().get();
        bubbleParticle->setPhysics(2.0, 0.6, 0);
        bubbleParticle->setup(box2d.getWorld(), mouseX, mouseY, r);
        
        r = ofRandom(40, 60);
        bubbles.push_back(shared_ptr<CustomParticle>(new CustomParticle));
        bubbleParticle = bubbles.back().get();
        bubbleParticle->setPhysics(2.0, 0.6, 0);
        bubbleParticle->setup(box2d.getWorld(), mouseX, mouseY, r);

        r = ofRandom(40, 60);
        bubbles.push_back(shared_ptr<CustomParticle>(new CustomParticle));
        bubbleParticle = bubbles.back().get();
        bubbleParticle->setPhysics(2.0, 0.6, 0);
        bubbleParticle->setup(box2d.getWorld(), mouseX, mouseY, r);
    }
    
    if (key == 's') {
        float l = ofRandom(20, 40);
        squares.push_back(shared_ptr<ofxBox2dRect>(new ofxBox2dRect));
        squares.back().get()->setPhysics(4.0, 0.6, 0.5);
        squares.back().get()->setup(box2d.getWorld(), mouseX, mouseY, l, l);
    }
    
    if (key == 't') {
        ofToggleFullscreen();
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
