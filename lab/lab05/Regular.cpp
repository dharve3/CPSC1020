// Name: Janaki Bhosale
// Date: 3/1/24
// CPSC 1021
// Lab 5: Parking Permits
// File: Regular .cpp
// Desc: File containing Regular class definitons and functions

#include "Regular.h"

// Validates input not empty for string type
bool Regular::validateInput(string v) {
    if (v.empty())
        return 0;
    else
        return 1;
}

// Validates that input is greater than or equal to 0 for int type
bool Regular::validateInput(int v) {
    if (v < 0)
        return 0;
    else
        return 1;
}

// Mutators 
bool Regular::setMake(string m) {
    if (validateInput(m)) {
        make = m;
        return 1;
    } else {
        return 0;
    }
}
bool Regular::setModel(string o) {
    if (validateInput(o)) {
        model = o;
        return 1;
    } else {
        return 0;
    }
}
bool Regular::setColor(int c) {
    if (validateInput(c)) {
        color = c;
        return 1;
    } else {
        return 0;
    }
}
bool Regular::licensePlate(int p) {
    if (validateInput(p)) {
        licensePlate = p;
        return 1;
    } else {
        return 0;
    }
}
bool Regular::setYear(int y) {
    if (validateInput(y)) {
        year = y;
        return 1;
    } else {
        return 0;
    }
}

// Accessors 
string Regular::getMake() {
    return make;
}
string Regular::getModel() {
    return model;
}
int Regular::getColor() {
    return color;
}
int Regular::getLicensePlate() {
    return licensePlate;
}
int Regular::getYear() {
    return year;
}
