#include "Piece.h"
#include <iostream>

using namespace std;


Piece::Piece() {
}

//Piece::Piece(const Piece& orig) {
//}

Piece::Piece(int num) {
    ID = num;
}

int Piece::getID(){
    return ID;
}

void Piece::addCoord(int x, int y){
    pair <int,int> coord = make_pair (x,y);
    piece.push_back(coord);
}

list<pair<int,int> > Piece::getCoords (){
    return piece;
}

int Piece::getSize(){
    return piece.size();
}

void Piece::mostrar(){
    list<pair<int,int> > aux=piece;
    cout << endl;
    while (aux.size() != 0){
        cout << "x: " << aux.front().first << " y: " << aux.front().second << endl;
        aux.pop_front();
    }
}

Piece::~Piece() {
}