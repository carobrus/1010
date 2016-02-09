#include "HeuristicHighestScore.h"
#include "Game.h"

HeuristicHighestScore::HeuristicHighestScore() {
    cout << "HeuristicHighestScore constructor" << endl;
}

HeuristicHighestScore::HeuristicHighestScore(const HeuristicHighestScore& orig) {
}

int HeuristicHighestScore::getValue(Game g){
    return g.getScore();
}

HeuristicHighestScore::~HeuristicHighestScore() {
    cout << "HeuristicHighestScore destructor" << endl;
}

