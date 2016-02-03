#include "HeuristicLine.h"

HeuristicLine::HeuristicLine(Game * game) {
    //cout << "HeuristicLine constructor" << endl;
    for (int i=0; i<game->getWidth(); i++)
        arr[i]=(i+1)*10;
}

/*HeuristicLine::HeuristicLine(const HeuristicLine& orig) {
}*/

int HeuristicLine::getValue(Game g){
    int accumulator = 0;
    for (int r=0; r<g.getWidth(); r++){
        for (int c=0; c<g.getHeight(); c++){
            if (g.checkSquare(c,r)){
                accumulator = accumulator + arr[r];
            }
        }
    }
    //cout << endl << "Val Heur: " << accumulator << endl << endl;
    return accumulator + g.getLinesDeleted()*2000;
}

HeuristicLine::~HeuristicLine() {
}

