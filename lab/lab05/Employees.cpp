//Name: Angie Diaz
//Date: 3/1/24
//CPSC 1021
//Lab 5: Parking Permits
//File: Employees.cpp
//Desc: File containing Employee class method definitions

#include "Employees.h"

// Validates that input is not empty for the string type
bool Employees::validateInput(string v) {
    if (v.empty())
        return 0;
    else
        return 1;
}

// Validates that input is greater than or equal to 0 for int type
bool Employees::validateInput(int v) {
    if (v < 0)
        return 0;
    else
        return 1;
}

// Mutators (Setters)
bool Employees::setName(string n) {
    if (validateInput(n)) {
        name = n;
        return 1;
    } else {
        return 0;
    }
}
bool Employees::setEmail(string e) {
    if (validateInput(e)) {
        email = e;
        return 1;
    } else {
        return 0;
    }
}
bool Employees::setAddress(string a) {
    if (validateInput(a)) {
        address = a;
        return 1;
    } else {
        return 0;
    }
}
bool Employees:: setEmployeeID(int d) {
	if (validateInput(d)) {
		employeeID = d;
		return 1;
	} else {
		return 0;
	}
}
bool Employees:: setYearsEmployed(int y) {
    if (validateInput(y)) {
        yearsEmployed = y;
        return 1;
    } else {
        return 0;
    }
}

// Accessors (Getters)
string Employees::getName() {
    return name;
}
string Employees::getEmail() {
    return email;
}
string Employees::getAddress() {
    return address;
}
int Employees::getEmployeeID() {
    return employeeID;
}
int Employees::getYearsEmployed() {
    return yearsEmployed;
}
