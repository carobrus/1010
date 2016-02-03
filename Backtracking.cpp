#include "Backtracking.h"
#include "Heuristic.h"
#include <iostream>
#include <windows.h>

using namespace std;

Backtracking::Backtracking() {
}

/*Backtracking::Backtracking(Heuristic* h) {
    heuristic = h;
}/*

/*Backtracking::Backtracking(const Backtracking& orig) {
}*/

void Backtracking::vueltaAtras(Game gameAct, Game &gameSol, Piece hand [], bool visited [], int& mejorPunt, int depth){  //depth comienza en 3 por la cant de piezas
    if (depth == 0){ 
        int resolveAux = floor(resolve(gameAct));
        if (resolveAux > mejorPunt){
            mejorPunt=resolveAux;
            gameSol=gameAct;
            cout << "Valor de resolveAux: " << resolveAux << endl;
            cout << "Score del juego: " << gameAct.getScore() << endl;
        }
    }    
    else if (depth>0){
        for (int pos =0; pos < gameAct.getHandSize(); pos++){
            if (visited[pos] == false){
                for (int x=0; x< gameAct.getWidth(); x++){
                    for (int y=0; y< gameAct.getHeight(); y++){
                        if (!gameAct.checkPiece(hand[pos],x,y)){
                            Game copia(gameAct);
                            copia.addPieceToBoard(hand[pos],x,y);
                            copia.refreshBoard(hand[pos]);
                            //Sleep(100);
                            //copia.printBoard();
                            visited[pos] = true;
                            vueltaAtras(copia, gameSol, hand, visited, mejorPunt, depth-1);
                            visited[pos] = false;
                        }
                    }
                }
            }
        }
    }
}

void Backtracking::addToList(Heuristic* heuristic, float proporcion){
    pair<Heuristic*, float> parAux = make_pair(heuristic,proporcion);
    heuristics.push_back(parAux);
}

int Backtracking::resolve(Game g){
    list<pair<Heuristic*, float> >:: iterator it = heuristics.begin();
    float aux =0;
    for (int i=0; i<heuristics.size(); i++){
        aux = aux + ((*it).first->getValue(g)*((*it).second));
        it++;
    }
    return aux;
}

Backtracking::~Backtracking() {
}