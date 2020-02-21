//
// Created by cardb on 2/21/2020.
//
#include <iostream>
#include "CheckHeader.h"
bool check(int value, int counter) {
    bool win;
    int firstValue;
    if (counter == 1) {
        firstValue = value;
    }
    if (value == 7 || value == 11) {
        std::cout << "you win congrats " << "\n";
        win = true;
        return win;
    }

    else{
        counter = 2;
    }
    if(counter == 2) {
        if(firstValue == 2 || firstValue == 3 || firstValue == 12 ){
            if(value != firstValue){
                win = true;
                counter = 1;
                return win;
            }
            else{
                win = false;
                counter = 1;
                return win;
            }
        }
        else{
            if(firstValue == value){
                win == true;
                counter = 1;
                return win;
            }
        }
    }
}

