#include <stdlib.h>
#include "walker.h"
#include "ofMain.h"


Walker::Walker()
{
    x = 350;
    y = 350;
    color = ofColor(rand()%255,rand()%255,rand()%255);
}

void Walker::step()
{
    int rand0_3 = rand() % 4;

    switch(rand0_3) {
    case 0: x +=1;
            break;
    case 1: x -=1;
            break;
    case 2: y +=1;
            break;
    case 3: y -=1;
            break;
    }
}
