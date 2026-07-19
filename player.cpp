#include <iostream>
#include <string>
using namespace std;




class Player {


    private:
        string name;
        char symbol;
    
    public:
        Player(char playerSymbol) {
            
            symbol = playerSymbol;
            
        }

        

        char getSymbol() {
            return symbol;
        }


        void setSymbol(char playerSymbol) {
            symbol = playerSymbol;
        }




};

