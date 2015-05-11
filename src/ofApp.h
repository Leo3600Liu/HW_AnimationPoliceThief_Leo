//Created by Jiteng Liu (Leo)

#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{
    
public:
    void setup();
    void update();
    void draw();
    void displayAnim(float xPos,float yPos);
    bool checkCollision();
    void keyPressed(int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);
    
    ofImage images [9];     //Declare variable 'images' of type PImage[]. Assign it will combine all the pictures to an animation.
    ofImage background,images_3;        //Declare variable 'Background' and 'image_3' of type PImage. Assign they will be put into the program.
    float diameter=40;      //Declare variable 'diameter' of type float and assign it the value 40.
    float txPos,tyPos,mx,my;        //Declare varibable 'txPos','tyPos','mx' and 'my' of type float. Assign them the value position.
    float xPos,yPos;        //Declare varibable 'xPos','yPos' of type float. Assign them the value position.
    bool collide;       //Declare variable 'collide' of type boolean. Assign it the value the collide when they hit each other.
    bool stopThief;     //Declare variable 'stopThief' of type boolean. Assign it the value the stop of the thief.
    int frames,framecounter,loops;      //Declare variable 'frames','framecounter','loops' of type int.
};
