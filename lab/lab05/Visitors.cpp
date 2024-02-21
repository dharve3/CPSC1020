// Name: Dylan Harvey
// Date: 03/01/2024
// Class: CPSC 1021
// Lab Name: Lab05 - Parking Permits
// File Name: Visitors.cpp
// Desc: Source file for Visitors Class (Type of customer), declares methods

#include "Visitors.h"

// Validates that input is not empty for the string type
bool Visitors::validateInput(string v) {
    if (v.empty())
        return 0;
    else
        return 1;
}

// Validates that input is greater than or equal to 0 for int type
bool Visitors::validateInput(int v) {
    if (v < 0)
        return 0;
    else
        return 1;
}

// Validates that the input is a valid (0 or 1) for the bool type
bool Visitors::validateInput(bool v) {
    if (v != 0 && v != 1)
        return 0;
    else
        return 1;
}

// Mutators (Setters)
bool Visitors::setName(string n) {
    if (validateInput(n)) {
        name = n;
        return 1;
    } else {
        return 0;
    } 
}
bool Visitors::setEmail(string e) {
    if (validateInput(e)) {
        email = e;
        return 1;
    } else {
        return 0;
    }
}
bool Visitors::setAddress(string a) {
    if (validateInput(a)) {
        address = a;
        return 1;
    } else {
        return 0;
    }
}
bool Visitors::setregNumber(int rN) {
    if (validateInput(rN)) {
        regNumber = rN;
        return 1;
    } else {
        return 0;
    }
}
bool Visitors::setFirstVisit(bool fV) {
    if (validateInput(fV)) {
        firstVisit = fV;
        return 1;
    } else {
        return 0;
    }
}

// Accessors (Getters)
string Visitors::getName() {
    return name;
}
string Visitors::getEmail() {
    return email;
}
string Visitors::getAddress() {
    return address;
}
int Visitors::getregNumber() {
    return regNumber;
}
bool Visitors::getFirstVisit() {
    return firstVisit;
}