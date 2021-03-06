#pragma once

#include "ofxBaseGui.h"

class ofxGuiBaseDraws: public ofxBaseGui {
public:
    ofxGuiBaseDraws();
    ofxGuiBaseDraws(string canvasName, ofBaseDraws* graphics = 0, float w = 0, float h = 0);
    ofxGuiBaseDraws(ofBaseDraws *graphics, float w = defaultWidth, float h = 0);
    virtual ~ofxGuiBaseDraws();

    ofxGuiBaseDraws * setup(string canvasName = "", ofBaseDraws* graphics = 0, float w = 0, float h = 0);

    // Abstract methods we must implement, but have no need for!
    virtual bool mouseMoved(ofMouseEventArgs & args){return false;}
    virtual bool mousePressed(ofMouseEventArgs & args){return false;}
    virtual bool mouseDragged(ofMouseEventArgs & args){return false;}
    virtual bool mouseReleased(ofMouseEventArgs & args){return false;}
    virtual bool mouseScrolled(ofMouseEventArgs & args){return false;}

    virtual void setSize(float w, float h);

    virtual ofAbstractParameter & getParameter();

protected:

    bool setValue(float mx, float my, bool bCheckBounds){return false;}
    virtual void render();
    virtual void generateDraw();
    ofPath bg;
    ofVboMesh textMesh;
    ofBaseDraws* graphics;
    ofParameter<string> label;
    bool _bLoaded;

};
