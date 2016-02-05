#include "PrintToConsole.h"
#include <iostream>

PrintToConsole::PrintToConsole() {
}

/*PrintToConsole::PrintToConsole(const PrintToConsole& orig) {
}*/

void PrintToConsole::printStartScreen(){
    cout << endl;
    cout << " --------------------------------------------------------------" << endl;
    cout << "                                                      ,----,  " << endl;
    cout << "                                                    ,`--.' |   " << endl;
    cout << "         ,---,    ,----..        ,---,    ,----..   |   :  :   " << endl;
    cout << "      ,`--.' |   /   /   \\    ,`--.' |   /   /   \\  '   '  ;   " << endl;
    cout << "     /    /  :  /   .     :  /    /  :  /   .     : |   |  |   " << endl;
    cout << "    :    |.' ' .   /   ;.  \\:    |.' ' .   /   ;.  \\'   :  ;   " << endl;
    cout << "    `----':  |.   ;   /  ` ;`----':  |.   ;   /  ` ;|   |  '   " << endl;
    cout << "       '   ' ;;   |  ; \\ ; |   '   ' ;;   |  ; \\ ; |'   :  |   " << endl;
    cout << "       |   | ||   :  | ; | '   |   | ||   :  | ; | ';   |  ;   " << endl;
    cout << "       '   : ;.   |  ' ' ' :   '   : ;.   |  ' ' ' :`---'. |   " << endl;
    cout << "       |   | ''   ;  \\; /  |   |   | ''   ;  \\; /  | `--..`;   " << endl;
    cout << "       '   : | \\   \\  ',  /    '   : | \\   \\  ',  / .--,_      " << endl;
    cout << "       ;   |.'  ;   :    /     ;   |.'  ;   :    /  |    |`.   " << endl;
    cout << "       '---'     \\   \\ .'      '---'     \\   \\ .'   `-- -`, ;  " << endl;
    cout << "                  `---`                   `---`       '---`\"   " << endl;
    cout << endl << endl;
    cout << " --------------------------------------------------------------" << endl;
    cout << "                By Bergottini L. & Bruscantini C." << endl;
    cout << "                          Algoritmos II "<< endl;
    cout << "                             UNICEN "<< endl;
    cout << " -----------------------------2016-----------------------------" << endl;
    cout << endl << endl;
    cout << " Press 'P' to play" << endl;
    char x;
    cin >> x;
}

void PrintToConsole::printPiece(Piece piece){
    list<pair<int,int> > aux=piece.getCoords();
    cout << endl;
    while (aux.size() != 0){
        cout << "x: " << aux.front().first << " y: " << aux.front().second << endl;
        aux.pop_front();
    }
}

void PrintToConsole::printBoard(Board matriz){
    cout << endl << "  0 1 2 3 4 5 6 7 8 9 ";
    cout << endl << "  - - - - - - - - - - " << endl;
    for (int r=0; r<matriz.getHeight(); r++){
        cout << r << "|";
        for (int c=0; c<matriz.getWidth(); c++)
            if (matriz.checkSquare(c,r) == 0)
                cout << " |";
            else
                {char a=219;
                cout << a << "|" ;}
        cout << r << endl << "  - - - - - - - - - - " << endl;
    }
    cout << "  0 1 2 3 4 5 6 7 8 9" << endl;
    cout << endl;
}

void PrintToConsole::printGameOver() {
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
    cout << endl;
}

PrintToConsole::~PrintToConsole() {
}