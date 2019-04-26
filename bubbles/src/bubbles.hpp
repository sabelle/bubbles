//
//  bubbles.hpp
//  bubbles
//
//  Created by sabelle on 4/9/19.
//

#ifndef bubbles_hpp
#define bubbles_hpp

#include <stdio.h>
#include "ofGraphics.h"
#include "ofxBox2d.h" //
#include "ofxBox2dCircle.h"
#include "ofxBox2dBaseShape.h"

#endif /* bubbles_hpp */
namespace bubbles {
    
class Bubbles: public ofxBox2dCircle  {
    
public:
    void setup();
    void update();
    virtual void draw();
    
private:
    ofxBox2dCircle box2dCircle;
    std::vector<unsigned> hexColors {0xebdcf2, 0xf4df8b, 0xbbf7e3};
    int count;
    float radius = box2dCircle.getRadius();
    ofxBox2d box2d; // the box2d world
    
//    //class member variables
//    b2Body* m_body;
//    float m_radius;
//    
//public:
//    Ball(b2World* world, float radius) {
//        m_body = NULL;
//        m_radius = radius;
//    }
//    ~Ball() {}
    
};
    
//class Bubbles: public ofxBox2dCircle {
//public:
//    virtual void draw();
//};
    
}

