#ifndef HEURISTICROW_H
#define HEURISTICROW_H

#include "Game.h"
#include "Heuristic.h"

class HeuristicRow : public Heuristic{
public:
    HeuristicRow(Game);
    //HeuristicRow(const HeuristicRow& orig);
    int getValue(Game);
    virtual ~HeuristicRow();
protected:
    int arr [];
};

#endif /* HEURISTICROW_H */

