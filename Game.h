#ifndef GAME_H
#define GAME_H

#include "Board.h"
#include "Piece.h"
#include <list>


class Game {
public:
    Game();                                     //crea un tablero y setea el score en 0.
    Game(const Game& orig);
    void copyGame(Game copia);                  //copia el score y el tablero.
    Board getBoard() const;
    int getHandSize() const;                    //devuelve el tamaño de la cantidad de fichas por ronda.
    int getLinesDeleted() const;                //devuelve la cantidad de filas y columnas que fueron eliminadas.
    bool checkPiece(Piece,int,int);             //chequea que la pieza pueda colocarse. True si esta ocupado, false si esta libre.
    bool addPieceToBoard(Piece, int, int);      //añade una pieza al tablero.
    void getPiecesToPlay(list<Piece>, Piece []);//devuelve tres piezas random para jugar.
    bool movesLeft(list<Piece>);                //si ninguna pieza puede colocarse, no quedan movimientos y devuelve false.
    int getWidth();                             //devuelve ancho del tablero del juego.
    int getHeight();                            //devuelve altura del tablero del juego.
    void setScore(int);                         //setea el score del juego.
    void increaseScore(int);                    //aumenta el score dependiendo del valor pasado.
    void increaseScore(Piece);                  //aumenta el score dependiendo el tamaño de la ficha.
    int getScore() const;                       //devuelve el puntaje.
    void refreshBoard(Piece);                   //limpia el tablero de filas y columnas ocupadas aumentado el score segun la pieza y la cantidad de lineas eliminadas.
    void setSquare(int,int);                    //marca un casillero como ocupado.
    bool checkSquare(int,int);                  //duvuelve si un casillero está ocupado o no.
    void reset();                               //borra el tablero y el score.
    Game& operator =(const Game &orig);         //sobrecarga de operador de asignacion.
    virtual ~Game();                            //destructor.
private:
    Board * board;
    int score;
    int handSize;
    int linesDeleted;
};

#endif /* GAME_H */

