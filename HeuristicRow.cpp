#include "HeuristicRow.h"

HeuristicRow::HeuristicRow(Game game) {
    for (int i=0; i<game.getHeight(); i++)
        arr[i]=(i+1)*10;
}

/*HeuristicRow::HeuristicRow(const HeuristicRow& orig) {
}*/

int HeuristicRow::getValue(Game g){
    int accumulator = 0;
    for (int r=0; r<g.getWidth(); r++)
        for (int c=0; c<g.getHeight(); c++){
            if (g.checkSquare(r,c))
                accumulator = accumulator + arr[r];
        }
    return accumulator;
}

HeuristicRow::~HeuristicRow() {
}

