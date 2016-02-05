#include "HeuristicSurroundingArea.h"

HeuristicSurroundingArea::HeuristicSurroundingArea(Game * game) {
    height = game->getHeight();
    width = game->getWidth();
    
    matriz = new int*[height];
    for (int r=0; r<height; r++)
        matriz[r] = new int[width];
    
    flushBoard();
}

/*HeuristicSurroundingArea::HeuristicSurroundingArea(const HeuristicSurroundingArea& orig) {
}*/

int HeuristicSurroundingArea::getValue(Game game) {
    int cell = 0;
    for (int r=0; r<game.getHeight(); r++){
        for (int c=0; c<game.getWidth(); c++){
            //se mueve por las celdas de los alrededores del tablero del juego
            if (((c-1 < 0) && (r-1 < 0)) || (game.checkSquare(c-1,r-1)))
                cell = cell + 1;
            if ((c-1 < 0) || (game.checkSquare(c-1,r)))
                cell = cell + 1;
            if (((c-1 < 0) && (r+1 > height)) || (game.checkSquare(c-1,r+1)))
                cell = cell + 1;
            if ((r-1 < 0) || (game.checkSquare(c,r-1)))
                cell = cell + 1;
            if ((r+1 > height) || (game.checkSquare(c,r+1)))
                cell = cell + 1;
            if (((c+1 > width) && (r-1 < 0)) || (game.checkSquare(c+1,r-1)))
                cell = cell + 1;
            if ((c+1 > width) || (game.checkSquare(c+1,r)))
                cell = cell + 1;
            if (((c+1 > width) && (r+1 > height)) || (game.checkSquare(c+1,r+1)))
                cell = cell + 1;
            //escribe en la matriz de la heuristica el peso segun los cuadrados ocupados o los bordes
            matriz[r][c] = cell;
            cell = 0;
        }
    
    }
    
    //suma el peso de la matriz. Si en el juego, el casillero estaba ocupado, lo pisa con un cero y no lo suma para la heuristica.
    int accumulator = 0;
    for (int r=0; r<game.getHeight(); r++){
        for (int c=0; c<game.getWidth(); c++){
            if (game.checkSquare(c,r)){
                matriz[r][c] = 9;
                accumulator = accumulator + 9;
            }
            else
              accumulator = accumulator + matriz[r][c];
        }
    }
    
    //reinicia matriz para que pueda ser usada posteriormente.
    flushBoard();
    
    return ((accumulator - game.getLinesDeleted() * game.getHeight() * game.getWidth()) * (-1));
}

void HeuristicSurroundingArea::flushBoard() {
    for (int r=0; r<height; r++)
        for (int c=0; c<width; c++)
            matriz[r][c] = 0;
}

void HeuristicSurroundingArea::printMatrix(){
    cout << endl << "  0 1 2 3 4 5 6 7 8 9 ";
    cout << endl << "  - - - - - - - - - - " << endl;
    for (int r=0; r<height; r++){
        cout << r << "|";
        for (int c=0; c<width; c++)
            cout << matriz[r][c] << "|";
        cout << r << endl << "  - - - - - - - - - - " << endl;
    }
    cout << "  0 1 2 3 4 5 6 7 8 9" << endl;
    cout << endl;
}

HeuristicSurroundingArea::~HeuristicSurroundingArea() {
    for (int r=0; r<height; r++)
        delete [] matriz[r];
    delete [] matriz;
    matriz = 0;
}