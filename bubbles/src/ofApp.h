#pragma once

#include "ofMain.h"
#include "ofxBox2d.h"

class CustomParticle : public ofxBox2dCircle {
    
public:
    CustomParticle() {
    }
    //ofColor color;
    void draw() {
        float radius = getRadius();        
        glPushMatrix();
        glTranslatef(getPosition().x, getPosition().y, 0);
        ofDrawCircle(0, 0, radius);
        glPopMatrix();
    }
};

class ofApp : public ofBaseApp {
    
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
    
    ofxBox2d box2d; //box2d world
    std::vector<shared_ptr<ofxBox2dRect> > squares;
    std::vector <shared_ptr<CustomParticle> > bubbles;
    std::vector<unsigned> hexColors {0xebdcf2, 0xf4df8b, 0xbbf7e3};
    std::vector<string> quoteCollection {
        "be the change you want to see",
        "do unto others as you would \nhave them do unto you",
        "where there's a will, there's a way",
        "seeker of truth \nfollow no paths \nall paths lead where \ntruth is here"
    };

    ofRectangle upGravityButton;
    ofRectangle downGravityButton;
    bool upGravityButtonClicked;
    bool downGravityButtonClicked;
};
