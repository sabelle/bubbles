#pragma once

#include "ofMain.h"
#include "ofxBox2d.h"

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
    
private:
    int count;
    
    ofxBox2d box2d; // the box2d world
    std::vector<shared_ptr<ofxBox2dCircle> > circles; // default box2d circles
    std::vector<unsigned> hexColors {0xebdcf2, 0xf4df8b, 0xbbf7e3};

    ofRectangle upGravityButton;
    ofRectangle downGravityButton;
    bool upGravityButtonClicked;
    bool downGravityButtonClicked;
};
