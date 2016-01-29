#ifndef BOARD_H
#define BOARD_H

class Board {
public:
    Board();                             //inicializa el tablero con tamaño 10x10 y en cero.
    Board(const Board& orig);            //constructor por copia.
    Board(int,int);                      //inicializa el tablero en cero del tamaño que se quiera.
    void flushBoard();                   //llena la matriz de ceros (vacia el tablero).
    void flushRow(int);                  //vacia una fila.
    void flushColumn(int);               //vacia un columna.
    bool fullColumn(int);                //si la columna tiene valores distintos de cero, retorna true.
    bool fullRow(int);                   //si la fila tiene valores distintos de cero, retorna true.
    void setSquare(int,int);             //marca un casillero como ocupado.
    bool checkSquare(int,int) const;     //devuelve true si no se puede poner nada en el casillero. True si esta ocupado.
    int getHeight() const;               //devuelve la altura del trablero.
    int getWidth() const;                //devuelve el ancho del tablero.
    int cleanLines();                    //borra las filas y columnas ocupadas. Devuelve la cantidad que se han borrado.
    virtual ~Board();                    //destructor.
private:
    int height;
    int width;
    bool ** matriz;
};

#endif /* BOARD_H */