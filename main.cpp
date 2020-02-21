#include <iostream>
#include "Die.h"
#include "CheckHeader.h"

int main() {
    int total =0;
    char play;
    int counter = 1;
    bool win;
    std::cout<<"would you like to play say y for yes " << "\n";
    std::cin >> play;
    while(play == 'y' || play == 'Y') {

        Die die1(1, 6, 1);
        Die die2(1, 6, 1);
        die1.setIncrement(6);
        die1.roll();
        die2.setIncrement(6);
        die2.roll();
        std::cout << "value of die 1 " << die1.getValue() << "\n";
        std::cout << "value of die 2 " << die2.getValue() << "\n";
        total = die1.getValue() + die2.getValue();
        std::cout << "the two dice have a value of " << total << "\n";
        win = check(total,counter);
        if(win == true){
            std::cout<<"you win play again";
        }

    }
}

