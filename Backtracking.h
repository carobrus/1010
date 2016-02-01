#ifndef BACKTRACKING_H
#define BACKTRACKING_H

#include "Game.h"
#include "Heuristic.h"
#include "PrintToConsole.h"
#include <list>

class Backtracking {
public:
    Backtracking();
    Backtracking(Heuristic*);
    //Backtracking(const Backtracking& orig);
    void vueltaAtras(Game, Game&, Piece [], bool [], int, int);
    virtual ~Backtracking();
private:
    Heuristic* heuristic;
};

#endif /* BACKTRACKING_H */

