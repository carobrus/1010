#include "HeuristicHighestScore.h"
#include "Game.h"

HeuristicHighestScore::HeuristicHighestScore() {
}

HeuristicHighestScore::HeuristicHighestScore(const HeuristicHighestScore& orig) {
}

int HeuristicHighestScore::getValue(Game g){
    return g.getScore();
}

HeuristicHighestScore::~HeuristicHighestScore() {
}

