#include <iostream>
#include <string>
using namespace std;


int Xwin (char board[3][3]){
    
    int countX = 0;
    for(int i = 0 ; i<3 ; i++){
       for(int j = 0 ; j<3; j++){
        if (board[i][j] == 'X' || board[i][j] == 'x') 
        {
            countX++;
            if (countX == 3){
               return true;
            }

        }
        
       }


    }
}

int main() {
   
    char board[3][3] = { {' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '} };
    char playerX;
    char playerO;
   

       
        cout << " " << board[0][0] << " | " << board[0][1] << " | " << board[0][2]  << endl;
        cout << "___|___|___" << endl;
        cout << "   |   |   "  << endl;
        cout << " " << board[1][0] << " | " << board[1][1] << " | " << board[1][2]  << endl;
        cout << "___|___|___" << endl;
        cout << "   |   |   "  << endl;
        cout << " " << board[2][0] << " | " << board[2][1] << " | " << board[2][2]  << endl;
       




    return 0;
}
