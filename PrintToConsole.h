#ifndef PRINTTOCONSOLE_H
#define PRINTTOCONSOLE_H

#include "Game.h"

class PrintToConsole {
public:
    PrintToConsole();
    PrintToConsole(const PrintToConsole& orig);
    void printPiece(Piece);
    void printBoard(Board);
    void printGameOver();
    virtual ~PrintToConsole();
private:

};

#endif /* PRINTTOCONSOLE_H */

