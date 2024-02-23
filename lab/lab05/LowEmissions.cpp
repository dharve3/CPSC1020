//Name: Angie Diaz
//Date: 3/1/24
//CPSC 1021
//Lab 5: Parking Permits
//File: LowEmissions.cpp
//Desc: LowEmissions class method definitions

#include "LowEmissions.h"

//validates input not empty for string type
bool LowEmissions::validateInput(string v) {
    if (v.empty())
        return 0;
    else
        return 1;
}

// validates that input is greater than or equal to 0 for int type
bool LowEmissions::validateInput(int v) {
    if (v < 0)
        return 0;
    else
        return 1;
}

// Mutators 
bool LowEmissions::setMake(string m) {
    if (validateInput(m)) {
        make = m;
        return 1;
    } else {
        return 0;
    }
}
bool LowEmissions::setModel(string o) {
    if (validateInput(o)) {
        model = o;
        return 1;
    } else {
        return 0;
    }
}
bool LowEmissions::setWeight(int w) {
    if (validateInput(w)) {
        weight = w;
        return 1;
    } else {
        return 0;
    }
}
bool LowEmissions::setMPG(int p) {
    if (validateInput(p)) {
        mpg = p;
        return 1;
    } else {
        return 0;
    }
}
bool LowEmissions::setYear(int y) {
    if (validateInput(y)) {
        year = y;
        return 1;
    } else {
        return 0;
    }
}

// Accessors 
string LowEmissions::getMake() {
    return make;
}
string LowEmissions::getModel() {
    return model;
}
int LowEmissions::getWeight() {
    return weight;
}
int LowEmissions::getMPG() {
    return mpg;
}
int LowEmissions::getYear() {
    return year;
}
