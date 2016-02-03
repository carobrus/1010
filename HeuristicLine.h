#ifndef HEURISTICLINE_H
#define HEURISTICLINE_H

#include "Game.h"
#include "Heuristic.h"
#include <iostream>
#include <vector>

class HeuristicLine : public Heuristic{
public:
    HeuristicLine(Game*, bool);
    //HeuristicLine(const HeuristicRow& orig);
    int getValue(Game);
    virtual ~HeuristicLine();
protected:
    vector<int> arr;
    bool isRow;
};

#endif /* HEURISTICLine_H */

