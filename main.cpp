#include <iostream>
#include "Die.h"
int main() {
    Die die1(1,6,1);
    Die die2(1,6,1);
    die1.setIncrement(6);
    die1.roll();
    die2.setIncrement(6);
    die2.roll();
    std::cout << "value of die 1 " << die1.getValue() << "\n";
    std::cout << "value of die 2 " << die2.getValue() << "\n";

}
