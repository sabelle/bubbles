//
//  bubbles.cpp
//  bubbles
//
//  Created by sabelle on 4/9/19.
//

#include "bubbles.hpp"
using namespace bubbles;

void Bubbles::loadBubbles() {
    ofSetColor(255, 0, 0, 127); 
    ofDrawCircle(100, 100, 50);
    
    ofSetColor(350, 20, 150, 90);
    ofDrawCircle(900, 200, 75);
}


//void ofDrawCircle(float x, float y, float radius);
