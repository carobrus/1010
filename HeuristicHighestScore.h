#ifndef HEURISTICHIGHESTSCORE_H
#define HEURISTICHIGHESTSCORE_H

#include "Heuristic.h"
#include "Game.h"

class HeuristicHighestScore : public Heuristic {
public:
    HeuristicHighestScore();
    HeuristicHighestScore(const HeuristicHighestScore& orig);
    int getValue(Game);
    virtual ~HeuristicHighestScore();
private:

};

#endif /* HEURISTICHIGHESTSCORE_H */

