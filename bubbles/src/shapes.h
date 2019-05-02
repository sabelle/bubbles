//
//  shapes.h
//  bubbles
//
//  Created by sabelle on 5/1/19.
//

#ifndef shapes_h
#define shapes_h

//#include <vector>
#include "ofMain.h"
#include "ofxBox2d.h"
#include "b2Settings.h"
#undef b2_maxPolygonVertices
#define b2_maxPolygonVertices 10
#endif /* shapes_h */


class bubble : public ofxBox2dCircle {
public:
    void draw() {
        float radius = getRadius();
        glPushMatrix();
        glTranslatef(getPosition().x, getPosition().y, 0);
        ofDrawCircle(0, 0, radius);
        glPopMatrix();
    }
};

class star{
private:
    std::vector<float> starVertices {
        0.00,  2.01,
        0.58,  0.81,
        1.91,  0.62,
        0.91, -0.14,
        1.18, -1.63,
        0.00, -0.83,
        -1.18, -1.63,
        -0.91, -0.14,
        -1.91, -0.62,
        -0.58,  0.81
    };
    
public:
    //http://www.iforce2d.net/b2dtut/drawing-objects
    void render() {
        glBegin(GL_LINES);
        glVertex2f( 0.00,  2.01);
        glVertex2f( 0.58,  0.81);
        glVertex2f( 1.91,  0.62);
        glVertex2f( 0.91, -0.14);
        glVertex2f( 1.18, -1.63);
        glVertex2f( 0.00, -0.83);
        glVertex2f(-1.18, -1.63);
        glVertex2f(-0.91, -0.14);
        glVertex2f(-1.91, -0.62);
        glVertex2f(-0.58,  0.81);
        glEnd();
    }
};

