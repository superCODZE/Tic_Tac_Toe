#include <iostream>
#include <string>
using namespace std;

enum State{
    IN_PROGRESS,
    WIN,
    LOSE,
    DRAW
};


class Player {


    private:
        string name;
        State Pstate;
        char symbol;
    
    public:
        Player( char playerSymbol) {
            
            symbol = playerSymbol;
            Pstate = State::IN_PROGRESS;
        }

        

        char getSymbol() {
            return symbol;
        }


        void setSymbol(char playerSymbol) {
            symbol = playerSymbol;
        }

        void setState(State state) {
            Pstate = state;
        }

        State getState() {
            return Pstate;
        }


        void dropSymbol(char board[3][3]) {
            int row, col;
            cout << "Player " << symbol << ", enter the row (0-2) to drop your symbol: ";
            cin >> row;
            cout << "Player " << symbol << ", enter the colomn (0-2) to drop your symbol: ";
            cin >> col;
            if (row >= 0 && row < 3 && col >= 0 && col < 3 && board[row][col] == ' ') {
                board[row][col] = symbol;
            } else {
                cout << "Invalid move. Please try again." << endl;
            }
        }


};