//
//  bubbles.cpp
//  bubbles
//
//  Created by sabelle on 4/9/19.
//

#include "bubbles.hpp"
using namespace bubbles;

void Bubbles::setup() {
    ofSetVerticalSync(true);
    ofSetLogLevel(OF_LOG_NOTICE);
    
    box2d.init();
    box2d.setGravity(0, 0);
    box2d.createBounds();
    box2d.setFPS(60.0);
    box2d.registerGrabbing();
}

void Bubbles::update() {
    box2d.update();
}

void Bubbles::draw() {
    if(!isBody()) return;
    
    ofPushMatrix();
    ofTranslate(getPosition().x, getPosition().y, 0);
    ofRotateDeg(getRotation(), 0, 0, 1);
    ofDrawCircle(0, 0, radius);
    
    ofPushStyle();
    ofEnableAlphaBlending();
    //
    
//    ofSetColor(hexColors[count % hexColors.size()]);
//    count++;
    //
    //
    ofSetColor(0);
    ofDrawLine(0, 0, radius, 0);
    if(isSleeping()) {
        ofSetColor(255, 100);
        ofDrawCircle(0, 0, radius);
    }
    ofPopStyle();
    
    ofPopMatrix();
}

