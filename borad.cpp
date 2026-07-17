#include <iostream>
#include <string>
using namespace std;


class Board {
   private:
    char board[3][3] = { {' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '} };
   
   public:
    void DisplayBoard() {
        cout << "   |   |   " << endl;
        cout << " " << board[0][0] << " | " << board[0][1] << " | " << board[0][2]  << endl;
        cout << "___|___|___" << endl;
        cout << "   |   |   "  << endl;
        cout << " " << board[1][0] << " | " << board[1][1] << " | " << board[1][2]  << endl;
        cout << "___|___|___" << endl;
        cout << "   |   |   "  << endl;
        cout << " " << board[2][0] << " | " << board[2][1] << " | " << board[2][2]  << endl;
    }


    


    bool CheckWin(char symbol) {
    
     for (int i = 0; i < 3; i++)
        if (board[i][0] == symbol && board[i][1] == symbol && board[i][2] == symbol)
            return true;
    
     for (int j = 0; j < 3; j++)
        if (board[0][j] == symbol && board[1][j] == symbol && board[2][j] == symbol)
            return true;
    
     if (board[0][0] == symbol && board[1][1] == symbol && board[2][2] == symbol)
        return true;
     if (board[0][2] == symbol && board[1][1] == symbol && board[2][0] == symbol)
        return true;

     return false;
    }


    bool CheckFull(){
      for(int i = 0 ; i<3 ; i++){
         for(int j = 0 ; j<3 ; j++){
            if(board[i][j] == ' '){
               return false;
            }
         }
      }
      return true;
    }



};