#include "Backtracking.h"
#include <iostream>
#include <windows.h>

using namespace std;

Backtracking::Backtracking() {
}

/*Backtracking::Backtracking(const Backtracking& orig) {
}*/

/*void Backtracking::vueltaAtras(Game* gameAct, Game* gameSol, list<Piece> hand, int mejorPunt, int depth){  //depth comienza en 3
    //cout << "Adentro backtracking" << endl;
    cout << depth << endl;
    gameAct->printBoard();
    int x; cin >> x;
    if ((gameAct->getScore() > mejorPunt)){
        mejorPunt=gameAct->getScore();
        gameSol=gameAct;
    }
    else{
        for (list<Piece>::iterator p = hand.begin(); p!=hand.end(); p++){
            cout << "TOMAAAS: " << (*p).getID() << endl;
            for (int x=0; x< gameAct->getWidth(); x++){
                for (int y=0; y< gameAct->getHeight(); y++){
                    if (!gameAct->checkPiece(*p,x,y)){
                        
                        Game proximo(*gameAct);
                        proximo.addPieceToBoard(*p,x,y);
                        proximo.refreshBoard(*p);
                        p++;
                        
                        if (!(depth == 0)){
                            Piece aux = hand.front();
                            hand.pop_front();
                            vueltaAtras(&proximo, gameSol, hand, mejorPunt, depth-1);
                            cout << "ATRAS" << endl;
                            hand.push_front(aux);
                        }

                    }
                }
            }
        }
    }
}*/

void Backtracking::vueltaAtras(Game gameAct, Game &gameSol, list<Piece> hand, int mejorPunt, int depth){  //depth comienza en 3 por la cant de piezas
    if ((depth == 0) && (gameAct.getScore() > mejorPunt)){
        mejorPunt=gameAct.getScore();
        gameSol=gameAct;
    }
    else{
        for (list<Piece>::iterator p = hand.begin(); p!=hand.end(); p++){
            for (int x=0; x< gameAct.getWidth(); x++){
                for (int y=0; y< gameAct.getHeight(); y++){
                    if (!gameAct.checkPiece(*p,x,y)){
                        Game copia= gameAct;
                        copia.addPieceToBoard(*p,x,y);
                        //copia.printBoard();
                        copia.refreshBoard(*p);
                        list<Piece> aux = hand;
                        aux.pop_front();
                        //copia.printBoard();
                        //Sleep(125);
                        vueltaAtras(copia, gameSol, aux, gameSol.getScore(), depth-1);
                    }
                }
            }
        }
        
    }
}

Backtracking::~Backtracking() {
}

