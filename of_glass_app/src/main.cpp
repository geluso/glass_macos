#include "ofMain.h"
#include "ofApp.h"

float winPosX = 0.f;
float winPosY = 0.f;

int handleWidth = 50;
int handleHeight = 50;

int main( ){
    ofGLFWWindowSettings glassSettings;
    glassSettings.setSize(1024, 768);
    
    
    glassSettings.windowMode = OF_WINDOW; //can also be OF_FULLSCREEN
    glassSettings.glVersionMajor = 3.0;
    glassSettings.glVersionMinor = 3.0;
    glassSettings.transparent = true;
    glassSettings.transparentInput = true;
    glassSettings.floating = true;
    glassSettings.decorated = false;
    
    ofGLFWWindowSettings handleSettings;
    handleSettings.setSize(handleWidth, handleHeight);
    handleSettings.windowMode = OF_WINDOW; //can also be OF_FULLSCREEN
    handleSettings.glVersionMajor = 3.0;
    handleSettings.glVersionMinor = 3.0;
    handleSettings.floating = true;
    
    glassSettings.setPosition(glm::vec2(handleWidth, 0));
    handleSettings.setPosition(glm::vec2(0, 0));

    auto handle = ofCreateWindow(handleSettings);
    auto glass = ofCreateWindow(glassSettings);

	ofRunApp(glass, std::make_shared<ofApp>());
    ofRunApp(handle, std::make_shared<ofApp>());
	ofRunMainLoop();
}
