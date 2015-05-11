//Created by Jiteng Liu (Leo)

#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){        //To define the basic environment conditions before the program starts.
    background.loadImage("Background.jpg");     //To define the picture will be write as 'Background'.
    images_3.loadImage("CarFrame_2.png");       //To load another picture.
    frames=9;       //There are 9 pictures in the animation.
    for(int i=0;i<frames;i++){      //For zero start.
        images[i].loadImage("ThiefFrame "+ ofToString(i+1)+".png");     //To load the images.
    }
    framecounter=-1;        //The number of frames will be displayed.
    ofSetFrameRate(24);     //The rate of the speed of the animation.
    stopThief=false;        //To make the command that is stop the thief work.
}

//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::displayAnim(float xPos,float yPos){     //To play the animation.
    if(!stopThief){     //To define the command.
        framecounter++;     //The frames will be displayed.
    }
    framecounter=(framecounter)%frames;     //The function of the animation.
    images[framecounter].draw(xPos, yPos);      //The position of the image.
}

//--------------------------------------------------------------
void ofApp::draw(){     //To excute the code.
    background.draw(0,0);       //Background's location.
    mx=ofClamp(ofGetMouseX(),0+diameter,ofGetWindowWidth());        //The x position of the motorcycle.
    my=ofClamp(ofGetMouseY(),0+diameter,ofGetWindowHeight());       //The y position of the motorcycle.
    displayAnim(txPos,tyPos);       //The position of the thief.
    images_3.draw(mx,my);       //The position of the motorcycle.
    collide=checkCollision();       //Define the collide.
    if(collide){        //To give the rule when they collide.
        txPos=ofRandom(0+diameter,ofGetWindowWidth());      //The x position of the thief.
        tyPos=ofRandom(0+diameter,ofGetWindowHeight());     //The y position of the thief.
        collide=false;      //To make the command that collide work.
    }
}

//------------------------------------------------------------
bool ofApp::checkCollision(){       //To define the command of collide.
    ofVec2f p1 = ofVec2f (mx, my);      //The area of thief runs away.
    ofVec2f p2 = ofVec2f (txPos, tyPos);        //The area of thief runs away.
    if(p1.distance(p2)<diameter+diameter/2){        //The area of thief runs away.
        bool result=true;       //The fisrt fragment of collide.
        return result;      //The rest fragement of collide.
    }else{      //To extend the 'if'.
        return false;       //The thing after the collide.
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){        //To set up the keyboard control.
    if(key=='z'){       //To define 'z' key will become the first conrol that is stop the thief.
        stopThief=!stopThief;        //To implement the code of 'z' key.
    }
    if(key=='x'||key=='x'){     //To define the 'x' key will become the saving control.
        ofSaveFrame("Animation_PoliceThief.png");       //The name will be save after put the 'x' key.
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
void ofApp::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){
    
}
