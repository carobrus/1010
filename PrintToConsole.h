#ifndef PRINTTOCONSOLE_H
#define PRINTTOCONSOLE_H

#include "Game.h"

class PrintToConsole {
public:
    PrintToConsole();
    //PrintToConsole(const PrintToConsole& orig);
    void printStartScreen();
    void printPiece(Piece);
    void printBoard(Board);
    void printGameOver();
    void printStartMenu();
    void printBacktrackingMenu();
    void printKeepMenu();
    virtual ~PrintToConsole();
private:

};

#endif /* PRINTTOCONSOLE_H */

