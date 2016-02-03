#ifndef HEURISTICLINE_H
#define HEURISTICLINE_H

#include "Game.h"
#include "Heuristic.h"
#include <iostream>

class HeuristicLine : public Heuristic{
public:
    HeuristicLine(Game*);
    //HeuristicLine(const HeuristicRow& orig);
    int getValue(Game);
    virtual ~HeuristicLine();
protected:
    int arr [];
};

#endif /* HEURISTICLine_H */

