//Created by Jiteng Liu (Leo)

#include "ofMain.h"
#include "ofApp.h"

//========================================================================
int main( ){
    ofSetupOpenGL(1100,364,OF_WINDOW);      //The screen size is 1100*364.
    // <-------- setup the GL context
    
    // this kicks off the running of my app
    // can be OF_WINDOW or OF_FULLSCREEN
    // pass in width and height too:
    ofRunApp(new ofApp());
}
