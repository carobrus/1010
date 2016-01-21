#include <cstdlib>
#include <iostream>
#include "Game.h"
//#include "Piece.h"
//#include "Board.h"

using namespace std;


int main(int argc, char** argv) {
    
    /*Board tomas;
    tomas.setSquare(2,5);
    tomas.printBoard();
    Board franco(tomas);
    franco.printBoard(); //verificacion constructor por copia de tablero*/
    
    Piece p0 = Piece(0);
    p0.addCoord(0,0);
    
    Piece p1 = Piece(1);     //Palito de 2 vertical
    p1.addCoord(0,0);
    p1.addCoord(0,1);
    
    Piece p2 = Piece(2);     //Palito de 2 horizontal
    p2.addCoord(0,0);
    p2.addCoord(1,0);
    
    Game game = Game();
    game.addPieceToGame(p0);
    game.addPieceToGame(p1);
    game.addPieceToGame(p2);
    game.setScore(5);
    game.addPieceToBoard(p0,3,7);
    game.printBoard();
    cout << game.getScore();
    list<Piece> lista = game.getPieces();
    
    list<Piece>:: iterator it_show = lista.begin();
    for (int i=0; i<lista.size(); i++){
        cout << "Pieza ID: "<< (*it_show).getID() << endl;
        it_show++;
    }
    
    Game copia(game);
    copia.printBoard();
    cout << "Score:" <<copia.getScore() << endl;
    
    list<Piece> lista2 = copia.getPieces();
        list<Piece>:: iterator it_show2 = lista2.begin();
    for (int i=0; i<lista2.size(); i++){
        cout << "Pieza ID: "<< (*it_show2).getID() << endl;
        it_show2++;
    }
    
    ////////////////////////////////// PIEZAS //////////////////////////////////
    /*
    Piece p0 = Piece(0);
    p0.addCoord(0,0);
    
    Piece p1 = Piece(1);     //Palito de 2 vertical
    p1.addCoord(0,0);
    p1.addCoord(0,1);
    
    Piece p2 = Piece(2);     //Palito de 2 horizontal
    p2.addCoord(0,0);
    p2.addCoord(1,0);
    
    
    Piece p3 = Piece(3);     //Palito de 3 vertical
    p3.addCoord(0,0);
    p3.addCoord(0,1);
    p3.addCoord(0,2);
    
    Piece p4 = Piece(4);     //Palito de 3 horizontal
    p4.addCoord(0,0);
    p4.addCoord(1,0);
    p4.addCoord(2,0);
    
    Piece p5 = Piece(5);     //Palito de 4 vertical
    p5.addCoord(0,0);
    p5.addCoord(0,1);
    p5.addCoord(0,2);
    p5.addCoord(0,3);
    
    Piece p6 = Piece(6);     //Palito de 4 horizontal
    p6.addCoord(0,0);
    p6.addCoord(1,0);
    p6.addCoord(2,0);
    p6.addCoord(3,0);
    
    Piece p7 = Piece(7);     //Palito de 5 vertical
    p7.addCoord(0,0);
    p7.addCoord(0,1);
    p7.addCoord(0,2);
    p7.addCoord(0,3);
    p7.addCoord(0,4);
    
    Piece p8 = Piece(8);     //Palito de 5 horizontal
    p8.addCoord(0,0);
    p8.addCoord(1,0);
    p8.addCoord(2,0);
    p8.addCoord(3,0);
    p8.addCoord(4,0);
    
    Piece p9 = Piece(9);     //cuadrado 2x2
    p9.addCoord(0,0);
    p9.addCoord(0,1);
    p9.addCoord(1,0);
    p9.addCoord(1,1);

    Piece p10 = Piece(10);   //cuadrado 3x3
    p10.addCoord(0,0);
    p10.addCoord(0,1);
    p10.addCoord(0,2);
    p10.addCoord(1,0);
    p10.addCoord(1,1);
    p10.addCoord(1,2);
    p10.addCoord(2,0);
    p10.addCoord(2,1);
    p10.addCoord(2,2);
    
    Piece p11 = Piece(11);   // ■ ■
    p11.addCoord(0,0);       // ■
    p11.addCoord(1,0);
    p11.addCoord(0,1);
    
    Piece p12 = Piece(12);   //   ■
    p12.addCoord(0,0);       // ■ ■
    p12.addCoord(0,1);
    p12.addCoord(-1,1);
    
    Piece p13 = Piece(13);   // ■ ■
    p13.addCoord(0,0);       //   ■
    p13.addCoord(1,0);
    p13.addCoord(1,1);
    
    Piece p14 = Piece(14);   // ■
    p14.addCoord(0,0);       // ■ ■
    p14.addCoord(0,1);
    p14.addCoord(1,1);
    
    Piece p15 = Piece(15);   // ■ ■ ■
    p15.addCoord(0,0);       // ■
    p15.addCoord(1,0);       // ■
    p15.addCoord(2,0);
    p15.addCoord(0,1);
    p15.addCoord(0,2);
    
    Piece p16 = Piece(16);   //     ■
    p16.addCoord(0,0);       //     ■
    p16.addCoord(0,1);       // ■ ■ ■
    p16.addCoord(0,2);
    p16.addCoord(-1,2);
    p16.addCoord(-2,2);
    
    Piece p17 = Piece(17);   // ■ ■ ■
    p17.addCoord(0,0);       //     ■
    p17.addCoord(1,0);       //     ■
    p17.addCoord(2,0);
    p17.addCoord(2,1);
    p17.addCoord(2,2);
    
    Piece p18 = Piece(18);   // ■
    p18.addCoord(0,0);       // ■
    p18.addCoord(0,1);       // ■ ■ ■
    p18.addCoord(0,2);
    p18.addCoord(1,2);
    p18.addCoord(2,2);
    
    /*Piece p19 = Piece(19);   //pieza grande
    p19.addCoord(0,0);
    p19.addCoord(0,1);
    p19.addCoord(0,2);
    p19.addCoord(0,3);
    p19.addCoord(0,4);
    p19.addCoord(0,5);
    p19.addCoord(0,6);
    p19.addCoord(1,0);
    p19.addCoord(2,0);
    p19.addCoord(3,0);
    p19.addCoord(4,0);
    p19.addCoord(5,0);
    p19.addCoord(6,0);
    p19.addCoord(1,6);
    p19addCoord(2,6);
    p19.addCoord(3,6);
    p19.addCoord(4,6);
    p19.addCoord(5,6);
    p19.addCoord(6,6);
    
    Piece p20 = Piece(20);
    p20.addCoord(0,0);
    p20.addCoord(1,0);
    p20.addCoord(2,0);
    p20.addCoord(3,0);
    p20.addCoord(4,0);
    p20.addCoord(5,0);
    p20.addCoord(6,0);
    p20.addCoord(7,0);
    p20.addCoord(8,0);
    p20.addCoord(0,1);
    p20.addCoord(0,2);
    p20.addCoord(0,3);
    p20.addCoord(0,4);
    p20.addCoord(0,5);
    p20.addCoord(0,6);
    p20.addCoord(0,7);
    p20.addCoord(0,8);
    p20.addCoord(1,1);
    p20.addCoord(1,2);
    p20.addCoord(1,3);
    p20.addCoord(1,4);
    p20.addCoord(1,5);
    p20.addCoord(1,6);
    p20.addCoord(1,7);
    p20.addCoord(1,8);*/

    
    ////////////////////////////////////////////////////////////////////////////
    /*   
    Game game = Game();
    game.addPieceToGame(p0);
    game.addPieceToGame(p1);
    game.addPieceToGame(p2);
    game.addPieceToGame(p3);
    game.addPieceToGame(p4);
    game.addPieceToGame(p5);
    game.addPieceToGame(p6);
    game.addPieceToGame(p7);
    game.addPieceToGame(p8);
    game.addPieceToGame(p9);
    game.addPieceToGame(p10);
    game.addPieceToGame(p11);
    game.addPieceToGame(p12);
    game.addPieceToGame(p13);
    game.addPieceToGame(p14);
    game.addPieceToGame(p15);
    game.addPieceToGame(p16);
    game.addPieceToGame(p17);
    game.addPieceToGame(p18);
    //game.addPieceToGame(p19);
    //game.addPieceToGame(p20);
    
    
    ////////////////////////////// BUCLE DEL JUEGO /////////////////////////////
    list<Piece> hand;
    while (hand.empty()){
        hand = game.getPiecesToPlay();
        while ((!hand.empty()) && (game.movesLeft(hand))){
            //system("cls");
            game.printBoard();
            cout << endl;
            
            list<Piece>:: iterator it_show = hand.begin();
            for (int i=0; i<hand.size(); i++){
            cout << "Pieza ID: "<< (*it_show).getID() << endl;
            it_show++;
            }
            
            cout << endl << endl << "Score:  " << game.getScore() << endl;
            
            int x=0;
            int y=0;
            int pieza=0;
            
            cout << endl << "elegi la pieza: ";
            cin >> pieza;
            cout << pieza << endl << "elegi la x: ";
            cin >> x;
            cout << x << endl << "elegi la y: ";
            cin >> y;
            cout << y << endl;
            
            list<Piece>:: iterator it = hand.begin();
            switch (pieza)
            {
                case 0:
                    if (game.addPieceToBoard(*it,x,y)){ //si se inserto
                        game.refreshBoard(*it);
                        hand.erase(it);
                    }
                    break;
                case 1:
                    for (int i=0; i<1; i++){
                    it++;}
                    if (game.addPieceToBoard(*it,x,y)){ //si se inserto
                        game.refreshBoard(*it);
                        hand.erase(it);
                    }
                    break;
                case 2:
                    for (int i=0; i<2; i++){
                    it++;}
                    if (game.addPieceToBoard(*it,x,y)){ //si se inserto
                        game.refreshBoard(*it);
                        hand.erase(it);
                    }
                    break;
            }
        }
    }
    
    
    //system("cls");
    
    cout << endl;
    cout << "                                       ____             " << endl;
    cout << "    ,----..      ,---,               ,'  , `.    ,---,. " << endl;
    cout << "   /   /   \\    '  .' \\           ,-+-,.' _ |  ,'  .' | " << endl;
    cout << "  |   :     :  /  ;    '.      ,-+-. ;   , ||,---.'   | " << endl;
    cout << "  .   |  ;. / :  :       \\    ,--.'|'   |  ;||   |   .' " << endl;
    cout << "  .   ; /--`  :  |   /\\   \\  |   |  ,', |  '::   :  |-, " << endl;
    cout << "  ;   | ;  __ |  :  ' ;.   : |   | /  | |  ||:   |  ;/| " << endl;
    cout << "  |   : |.' .'|  |  ;/  \\   \\'   | :  | :  |,|   :   .' " << endl;
    cout << "  .   | '_.' :'  :  | \\  \\ ,';   . |  ; |--' |   |  |-, " << endl;
    cout << "  '   ; : \\  ||  |  '  '--'  |   : |  | ,    '   :  ;/| " << endl;
    cout << "  '   | '/  .'|  :  :        |   : '  |/     |   |    \\ " << endl;
    cout << "  |   :    /  |  | ,'        ;   | |`-'      |   :   .' " << endl;
    cout << "   \\   \\ .'   `--''          |   ;/          |   | ,'   " << endl;
    cout << "    `---`                    '---'           `----'     " << endl;
    cout << "      ,----..                                           " << endl;
    cout << "     /   /   \\                  ,---,.,-.----.          " << endl;
    cout << "    /   .     :        ,---.  ,'  .' |\\    /  \\         " << endl;
    cout << "   .   /   ;.  \\      /__./|,---.'   |;   :    \\        " << endl;
    cout << "  .   ;   /  ` ; ,---.;  ; ||   |   .'|   | .\\ :        " << endl;
    cout << "  ;   |  ; \\ ; |/___/ \\  | |:   :  |-,.   : |: |        " << endl;
    cout << "  |   :  | ; | '\\   ;  \\ ' |:   |  ;/||   |  \\ :        " << endl;
    cout << "  .   |  ' ' ' : \\   \\  \\: ||   :   .'|   : .  /        " << endl;
    cout << "  '   ;  \\; /  |  ;   \\  ' .|   |  |-,;   | |  \\        " << endl;
    cout << "   \\   \\  ',  /    \\   \\   ''   :  ;/||   | ;\\  \\       " << endl;
    cout << "    ;   :    /      \\   `  ;|   |    \\:   ' | \\.'       " << endl;
    cout << "     \\   \\ .'        :   \\ ||   :   .':   : :-'         " << endl;
    cout << "      `---`           '---' |   | ,'  |   |.'           " << endl;
    cout << "                            `----'    `---'             " << endl;
    char e;
    cin >> e;*/
    
    ////////////////////////////////////////////////////////////////////////////
    
    
    return 0;
}