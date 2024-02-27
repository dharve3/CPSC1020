// Vehicles.cpp

#include "Vehicles.h"

// Name: Janaki Bhosale
// Date: 3/1/24
// CPSC 1021
// Lab 5: Parking Permits
// File: Regular .cpp
// Desc: File containing Regular class definitons and functions

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


// Name: Dylan Harvey
// Date: 03/01/2024
// Class: CPSC 1021
// Lab Name: Lab05 - Parking Permits
// File Name: Motorcycle.cpp
// Desc: Source file for Motorcycle Class (Type of vehicle), declares methods

// Validates that input is not empty for the string type
bool Motorcycle::validateInput(string v) {
    if (v.empty())
        return 0;
    else
        return 1;
}

// Validates that input is greater than or equal to 0 for int type
bool Motorcycle::validateInput(int v) {
    if (v < 0)
        return 0;
    else
        return 1;
}

// Mutators (Setters)
bool Motorcycle::setMake(string m) {
    if (validateInput(m)) {
        make = m;
        return 1;
    } else {
        return 0;
    }
}
bool Motorcycle::setModel(string o) {
    if (validateInput(o)) {
        model = o;
        return 1;
    } else {
        return 0;
    }
}
bool Motorcycle::setCC(int c) {
    if (validateInput(c)) {
        cc = c;
        return 1;
    } else {
        return 0;
    }
}
bool Motorcycle::setCapacity(int p) {
    if (validateInput(p)) {
        capacity = p;
        return 1;
    } else {
        return 0;
    }
}
bool Motorcycle::setYear(int y) {
    if (validateInput(y)) {
        year = y;
        return 1;
    } else {
        return 0;
    }
}

// Accessors (Getters)
string Motorcycle::getMake() {
    return make;
}
string Motorcycle::getModel() {
    return model;
}
int Motorcycle::getCC() {
    return cc;
}
int Motorcycle::getCapacity() {
    return capacity;
}
int Motorcycle::getYear() {
    return year;
}


//Name: Angie Diaz
//Date: 3/1/24
//CPSC 1021
//Lab 5: Parking Permits
//File: LowEmission.cpp
//Desc: LowEmission class method definitions

// Validates input not empty for string type
bool LowEmission::validateInput(string v) {
    if (v.empty())
        return 0;
    else
        return 1;
}

// Validates that input is greater than or equal to 0 for int type
bool LowEmission::validateInput(int v) {
    if (v < 0)
        return 0;
    else
        return 1;
}

// Mutators 
bool LowEmission::setMake(string m) {
    if (validateInput(m)) {
        make = m;
        return 1;
    } else {
        return 0;
    }
}
bool LowEmission::setModel(string o) {
    if (validateInput(o)) {
        model = o;
        return 1;
    } else {
        return 0;
    }
}
bool LowEmission::setWeight(int w) {
    if (validateInput(w)) {
        weight = w;
        return 1;
    } else {
        return 0;
    }
}
bool LowEmission::setMPG(int p) {
    if (validateInput(p)) {
        mpg = p;
        return 1;
    } else {
        return 0;
    }
}
bool LowEmission::setYear(int y) {
    if (validateInput(y)) {
        year = y;
        return 1;
    } else {
        return 0;
    }
}

// Accessors 
string LowEmission::getMake() {
    return make;
}
string LowEmission::getModel() {
    return model;
}
int LowEmission::getWeight() {
    return weight;
}
int LowEmission::getMPG() {
    return mpg;
}
int LowEmission::getYear() {
    return year;
}