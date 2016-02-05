#include "HeuristicLine.h"

HeuristicLine::HeuristicLine(Game * game, bool row) {
    cout << "HeuristicLine constructor" << endl;
    for (int i=0; i<game->getWidth(); i++)
        arr.push_back((i+1)*10);
    isRow = row; 
}

/*HeuristicLine::HeuristicLine(const HeuristicLine& orig) {
}*/

int HeuristicLine::getValue(Game g){                                                                     
    int accumulator = 0;
    for (int r=0; r<g.getWidth(); r++){
        for (int c=0; c<g.getHeight(); c++){
            if (g.checkSquare(c,r)){
                if (isRow == true){
                    accumulator = accumulator + arr[r];
                }
                else{
                    accumulator = accumulator + arr[c];
                }
            }
        }
    }
    //cout << endl << "Val Heur: " << accumulator << endl << endl;
    return accumulator + g.getLinesDeleted()*2000;
}

HeuristicLine::~HeuristicLine() {
    cout << "HeuristicLine destructor" << endl;
}

