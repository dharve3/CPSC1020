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
// File Name: Motorcycles.cpp
// Desc: Source file for Motorcycles Class (Type of vehicle), declares methods

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


//Name: Angie Diaz
//Date: 3/1/24
//CPSC 1021
//Lab 5: Parking Permits
//File: LowEmissions.cpp
//Desc: LowEmissions class method definitions

// Validates input not empty for string type
bool LowEmissions::validateInput(string v) {
    if (v.empty())
        return 0;
    else
        return 1;
}

// Validates that input is greater than or equal to 0 for int type
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