//
// Created by cardb on 2/14/2020.
//
#include <string>
#ifndef CRAPS_DIE_H
#define CRAPS_DIE_H
class Die{
private:
    int numSide;
    int increment;
    int value;
    std::string color;
    bool isSymbol;
    std::string material;
    int startingValue;
public:
    Die(int startingNumSide, int startingIncrement=1, int startingStartingValue= 1, std::string color= "white",
            bool isSymbol = false,std::string material ="bone");
    int roll();
    void setNumSide(int newNumSide);
    int getNumSide();
    void setIncrement(int newIncrement);
    int getIncrement();
    void setValue(int newValue);
    int getValue();
    void setColor(std::string newColor);
    std::string getColor();
    void setMaterial(std::string newMaterial;
    std::string getCMaterial();
    void setIsSymbol(bool newSymbol);
    bool getIsSymbol();

};

#endif //CRAPS_DIE_H
