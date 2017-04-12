#include "ofApp.h"
#include "walker.h"

const int STEPS = 3600;
const int WALKERS = 100;

//--------------------------------------------------------------
void ofApp::setup(){

    step = 0;
    for (int i = 0; i < WALKERS; ++i ) {
        walker[i]= new Walker();
    }

}

//--------------------------------------------------------------
void ofApp::update(){

    if (step++ < STEPS) {
        for (int i = 0; i < WALKERS; ++i) {
            walker[i]->step();
        }
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(255,255,255);
    ofFill();
    ofDrawRectangle(50,50,650,650);

    ofNoFill();
    for (int i = 0; i < 100; ++i) {
        ofSetColor(walker[i]->color);
        ofDrawCircle( walker[i]->x, walker[i]->y, 3 );
    }

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

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
