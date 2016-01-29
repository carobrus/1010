#include "Piece.h"
#include <iostream>

using namespace std;


Piece::Piece(){
}

Piece::Piece(const Piece& orig){
    ID = orig.getID();
    piece = orig.getCoords();
}

Piece::Piece(int num){
    ID = num;
}

int Piece::getID() const{
    return ID;
}

void Piece::addCoord(int x, int y){
    pair <int,int> coord = make_pair (x,y);
    piece.push_back(coord);
}

list<pair<int,int> > Piece::getCoords() const{
    return piece;
}

int Piece::getSize(){
    return piece.size();
}

Piece::~Piece(){
}