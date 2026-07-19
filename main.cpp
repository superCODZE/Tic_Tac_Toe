#include <iostream>
#include <string>
#include "board.cpp"
#include "player.cpp"
using namespace std;



void DisplayBanner(){
    cout << R"(
 _____ ___ ____   _____  _    ____   _____ ___  _____ 
|_   _|_ _/ ___| |_   _|/ \  / ___| |_   _/ _ \| ____|
  | |  | | |       | | / _ \| |       | || | | |  _|  
  | |  | | |___    | |/ ___ \ |___    | || |_| | |___ 
  |_| |___\____|   |_/_/   \_\____|   |_| \___/|_____|
  )" << endl;
  cout << "               The game has been started           " << endl;
  cout << "=======================================================" << endl;
          
}


int main() {
    DisplayBanner();


    etq3 : Player player('X');
    Board gameBoard;
    char repeat;
    int row, col;
    
    
     while (!gameBoard.CheckWin('X') && !gameBoard.CheckWin('O') && !gameBoard.CheckFull()) {
        gameBoard.DisplayBoard();
        cout << "the current player is: " << player.getSymbol() << endl;
        etq1: cout << "Enter row (0-2): ";
        cin >> row;

        
        if (row < 0 || row > 2){

            goto etq1;

        }

        etq2: cout << "Enter column (0-2): ";
        cin >> col;
       
        if (col < 0 || col >2 ){

            goto etq2;

        }
        
       if ( gameBoard.getCase(row , col) != ' '){
          cout << "This case is already taken, please choose another one." << endl;
          goto etq1;
        }


        gameBoard.MakeMove(row , col , player.getSymbol());

        if (player.getSymbol() == 'X'){
            player.setSymbol('O');
        } else {
            player.setSymbol('X');
        }
        cout << "=======================================================" << endl;
    }
     gameBoard.DisplayBoard();

    if (gameBoard.CheckWin('X')){
        
        cout << "the Player of X win this game" << endl;


    }

    else if (gameBoard.CheckWin('O')){
        cout << "the Player of O win this game" << endl;
    }

    else {
        cout << "DRAW" << endl;
    }

    cout << "Do you went to play again? (y/n): ";
    cin >> repeat;
    repeat = tolower(repeat);
    if (repeat == 'y'){
        cout << "=======================================================" << endl;
       gameBoard.emptyBoard();
       goto etq3;
    }
    else {
        cout << "Thanks for playing!" << endl;
    }
    






    return 0;
}
