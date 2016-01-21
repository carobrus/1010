#include "Game.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <math.h>

using namespace std;


Game::Game()
{
    //cout << "Constructor Game" << endl;
    board = new Board();
    score = 0;
}

//Game::Game(const Game& orig) {
//}

void Game::copyGame(Game copia){
    copia.setScore(this->score);
    Board auxBoard = (copia.getBoard());
    board->copyBoard(auxBoard);
}

Board Game::getBoard(){
    return *board;
}

bool Game::checkPiece(Piece p, int x, int y){ //chequea que la pieza pueda colocarse. true si esta ocupado, false si esta libre
    list<pair<int,int> > aux=p.getCoords();
    while (aux.size() != 0)
    {
        if (board->checkSquare(aux.front().first+x, aux.front().second+y))
            return true;
        aux.pop_front();
    }
    return false;
    
}

bool Game::addPieceToBoard(Piece p, int x, int y){
    if (!checkPiece(p,x,y)){
        list<pair<int,int> > aux=p.getCoords();
        while (aux.size() != 0){
            board->setSquare(aux.front().first+x, aux.front().second+y);
            aux.pop_front();
        }
        return true;
        cout << "la metio " << endl;
    }
    else{
        cout << "no la metio" << endl;
        return false;
    }
}

/*list<Piece> Game::getPieces(){
    
}*/


void Game::addPieceToGame(Piece p){
    pieces.push_back(p);
}

list<Piece> Game::getPiecesToPlay(){
    srand(time(NULL)); //inicializa la seed
    list<Piece> aux;
    for (int i=0; i<3; i++){
        int random = rand()%(pieces.size()); //genera un numero entre 0 y el .size
        cout << "Random: " << random << endl;
        list<Piece>::iterator it = pieces.begin();
        for (int j=0; j<random; j++)
            it++;
        aux.push_back(*it);
    }
    return aux;
}

void Game::printBoard(){
    board->printBoard();
}

bool Game::movesLeft(list<Piece> hand){
    list<Piece>:: iterator it = hand.begin();
    for (int i=0; i<hand.size(); i++){
        for (int x=0; x< board->getWidth(); x++){
            for (int y=0; y< board->getHeight(); y++){
                if (!checkPiece(*it,x,y))
                    return true;
            }
        }
        it++;
    }
    return false;
}

int Game::getWidth(){
    return board->getWidth();
}

int Game::getHeight(){
    return board->getHeight();
}

void Game::setScore(int score){
    this->score = score;
}


void Game::increaseScore(int amount){
    if (amount > 0)
        score = score + (10*pow(2,amount-1));
}

void Game::increaseScore(Piece P){
    score = score + (P.getSize());
}

int Game::getScore(){
    return score;
}

void Game::refreshBoard(Piece P){
    increaseScore(P);
    increaseScore(board->cleanLines());
}

void Game::setSquare(int r, int c){
    board->setSquare(r,c);
}

Game::~Game() {
    delete board;
}