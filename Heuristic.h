#ifndef HEURISTIC_H
#define HEURISTIC_H

#include "Game.h"
#include <iostream>

class Heuristic {
public:
    Heuristic();
    //Heuristic(const Heuristic& orig);
    virtual int getValue(Game);
    virtual ~Heuristic();
protected:

};

#endif /* HEURISTIC_H */

