#ifndef BACKTRACKING_H
#define BACKTRACKING_H

#include "Game.h"
#include "Heuristic.h"
#include "PrintToConsole.h"
#include <list>
#include <utility>
#include <math.h>

class Backtracking {
public:
    Backtracking();
    //Backtracking(const Backtracking& orig);
    void vueltaAtras(Game, Game&, Piece [], bool [], int&, int);
    void addToList (Heuristic*, float);
    int resolve (Game);
    virtual ~Backtracking();
private:
    list<pair<Heuristic*, float> > heuristics;
};

#endif /* BACKTRACKING_H */

