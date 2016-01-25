#ifndef BACKTRACKING_H
#define BACKTRACKING_H

#include "Game.h"
#include <list>

class Backtracking {
public:
    Backtracking();
    //Backtracking(const Backtracking& orig);
    void vueltaAtras(Game, Game&, list<Piece>, int, int);
    virtual ~Backtracking();
private:

};

#endif /* BACKTRACKING_H */

