#ifndef WALKER_H
#define WALKER_H

#include "ofMain.h"

class Walker
{

public:
    int x,y;
    ofColor color;

    Walker();
    void step();
};

#endif // WALKER_H
