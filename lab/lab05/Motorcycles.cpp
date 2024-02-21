// Name: Dylan Harvey
// Date: 03/01/2024
// Class: CPSC 1021
// Lab Name: Lab05 - Parking Permits
// File Name: Motorcycles.cpp
// Desc: Description here

#include "Motorcycles.h"

// Validates that input is not empty for the string type
bool Motorcycles::validateInput(string v) {
    if (v.empty())
        return 0;
    else
        return 1;
}

// Validates that input is greater than or equal to 0 for int type
bool Motorcycles::validateInput(int v) {
    if (v < 0)
        return 0;
    else
        return 1;
}

// Mutators (Setters)
bool Motorcycles::setMake(string m) {
    if (validateInput(m)) {
        make = m;
        return 1;
    } else {
        return 0;
    }
}
bool Motorcycles::setModel(string o) {
    if (validateInput(o)) {
        model = o;
        return 1;
    } else {
        return 0;
    }
}
bool Motorcycles::setCC(int c) {
    if (validateInput(c)) {
        cc = c;
        return 1;
    } else {
        return 0;
    }
}
bool Motorcycles::setCapacity(int p) {
    if (validateInput(p)) {
        capacity = p;
        return 1;
    } else {
        return 0;
    }
}
bool Motorcycles::setYear(int y) {
    if (validateInput(y)) {
        year = y;
        return 1;
    } else {
        return 0;
    }
}

// Accessors (Getters)
string Motorcycles::getMake() {
    return make;
}
string Motorcycles::getModel() {
    return model;
}
int Motorcycles::getCC() {
    return cc;
}
int Motorcycles::getCapacity() {
    return capacity;
}
int Motorcycles::getYear() {
    return year;
}