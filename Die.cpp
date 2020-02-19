//
// Created by cardb on 2/14/2020.
//
#include "Die.h"
#include <cstdlib>
#include <ctime>


    Die::Die(int startingNumSide, int startingIncrement, int startingStartingValue) {
        srand(time(0));
    }
    int Die::roll(){

        value = rand() % increment + 1;
    }
    void Die::setNumSide(int newNumSide){
        numSide = newNumSide;
    }
    int Die::getNumSide(){
        return numSide;
    }
    void Die::setIncrement(int newIncrement){
        increment = newIncrement;
    }
    int Die::getIncrement(){
        return increment;
    }
    void Die::setValue(int newValue){
        value = newValue;
    }
    int Die::getValue(){
        return value;
    }
   /* void Die::setColor(std::string newColor){
        color = newColor;
    }
    std::string Die::getColor(){
        return color;
    }
    void Die::setMaterial(std::string newMaterial){
        material = newMaterial;
    }
    std::string Die::getCMaterial(){
        return material;
    }
    void Die::setIsSymbol(bool newSymbol){
        isSymbol = newSymbol;
    }
    bool Die::getIsSymbol(){
        return isSymbol;
    }
*/