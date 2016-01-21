#include "Board.h"
#include <iostream>
#include <list>

using namespace std;


Board::Board(){
    //cout << "Construyendo board" << endl;
    height = 10;
    width = 10;
    matriz = new bool*[height];
    for (int r=0; r<height; r++)
        matriz[r] = new bool[width];
    flushBoard();
}

//Board::Board(const Board& orig) {
//}

Board::Board(int height, int width){
    this->height = height;
    this->width = width;
    matriz = new bool*[height];
    for (int r=0; r<height; r++)
        matriz[r] = new bool[width];
    flushBoard();
}

void Board::flushBoard(){
    for (int r=0; r<height; r++)
        for (int c=0; c<width; c++)
            matriz[r][c] = 0;
}

void Board::flushRow(int r){
    for (int c=0; c<width; c++)
        matriz[r][c] = 0;
}

void Board::flushColumn(int c){
    for (int r=0; r<height; r++)
        matriz[r][c] = 0;
}

bool Board::fullColumn(int column){
    for (int r=0; r<height; r++){
        if (matriz[r][column] == 0)
            return false;
    }
    return true;
}

bool Board::fullRow(int row){
    for (int c=0; c<width; c++){
        if (matriz[row][c] == 0)
            return false;
    }
    return true;
}

void Board::setSquare(int r, int c){
    matriz[r][c] = 1;
}

bool Board::checkSquare(int r, int c){
    if ((r<height) && (r>=0) && (c<width) && (c>=0))
        return (matriz[r][c]);
    return true;
}

void Board::printBoard(){
    cout << endl << " - - - - - - - - - - " << endl;
    for (int r=0; r<height; r++){
        cout << "|";
        for (int c=0; c<width; c++)
            if (!matriz[c][r])
                cout << " |";
            else
                {char a=219;
                cout << a << "|" ;}
        cout << endl << " - - - - - - - - - - " << endl;
    }
    cout << endl;
}

int Board::getHeight(){
    return height;
}

int Board::getWidth(){
    return width;
}

int Board::cleanLines(){
    list <int> columns, rows;
    int c=0, r=0;
    
    for (c=0; c<width; c++)
        if (fullColumn(c))
            columns.push_back(c);
    
    for (r=0; r<height; r++)
        if (fullRow(r))
            rows.push_back(r);
    
    //Borrar las filas y columnas que estan ocupadas
    int amountC = columns.size();
    int amountR = rows.size();
    
    for (c=0; c<amountC; c++){
        flushColumn(columns.front());
        columns.pop_front();
    }
    
    for (r=0; r<amountR; r++){
        flushRow(rows.front());
        rows.pop_front();
    }
    
    return (amountC + amountR);
}

void Board::copyBoard(Board copia){
    for (int i=0; i<height; i++)
        for (int j=0; j<width; j++)
        {
            if (matriz[i][j] == 1)
                copia.setSquare(i,j);
        }
}

Board::~Board(){
    //cout << "Destruyendo board" << endl;
    for (int r=0; r<height; r++)
        delete [] matriz[r];
    delete [] matriz;
    matriz = 0;
}