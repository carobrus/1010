#ifndef HEURISTICSURROUNDINGAREA_H
#define HEURISTICSURROUNDINGAREA_H

#include <iostream>
#include "Heuristic.h"
#include "Game.h"

class HeuristicSurroundingArea : public Heuristic {
public:
    HeuristicSurroundingArea(Game*);        //constructor de la clase. Dada un puntero al juego, inicializa una matriz del mismo tamaño con ceros.
    //HeuristicSurroundingArea(const HeuristicSurroundingArea& orig);
    int getValue(Game);                     //dado un juego, calcula el valor para cada celda en base a que tan ocupados esten los casilleros vecinos.
    void flushBoard();                      //llena la matriz de ceros.
    void printMatrix();                     //imprime la matriz. Usada para verificacion.
    virtual ~HeuristicSurroundingArea();    //destruye la matriz.
private:
    int height;
    int width;
    int ** matriz;
};

#endif /* HEURISTICSURROUNDINGAREA_H */

