#ifndef PIECE_H
#define PIECE_H

#include <list>
#include <utility>

using namespace std;


class Piece {
public:
    Piece();
    Piece(const Piece& orig);               //constructor por copia
    Piece(int);                             //constructor con inicializador de ID
    int getID() const;                      //devuelve ID
    void addCoord(int, int);                //añade una coordenada a la pieza.
    list<pair<int,int> > getCoords() const; //devuelve la forma de la pieza en una lista de pares.
    int getSize();                          //devuelve la cantidad de coordenadas que tiene la pieza. El tamaño de la lista de pares piece.
    virtual ~Piece();
private:
    int ID;
    list<pair<int,int> > piece;
};

#endif /* PIECE_H */

/*Cada pieza consta de un identificador (ID). Su forma viene dada por las
 coordenadas que se almacenan en una lista de pares. A partir de la clase Piece
 se puede crear cualquier pieza que se desee.*/