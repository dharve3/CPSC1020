// Customers.cpp

#include "Customers.h"


// Name: Dylan Harvey
// Date: 03/01/2024
// Class: CPSC 1021
// Lab Name: Lab05 - Parking Permits
// File Name: Customers.cpp
// Desc: Source file for Visitors Class (Type of customer), declares methods

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
bool Visitors::setRegNumber(int rN) {
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
int Visitors::getRegNumber() {
    return regNumber;
}
bool Visitors::getFirstVisit() {
    return firstVisit;
}


// Name: Janaki Bhosale
// Date: 3/1/24
// CPSC 1021
// Lab 5: Parking Permits
// File: Customers.cpp
// Desc: File containing Student class definitons and functions


// Validates that input is not empty for the string type
bool Students::validateInput(string v) {
    if (v.empty())
        return 0;
    else
        return 1;
}

// Validates that input is greater than or equal to 0 for int type
bool Students::validateInput(int v) {
    if (v < 0)
        return 0;
    else
        return 1;
}

// Mutators (Setters)
bool Students::setName(string n) {
    if (validateInput(n)) {
        name = n;
        return 1;
    } else {
        return 0;
    }
}
bool Students::setEmail(string e) {
    if (validateInput(e)) {
        email = e;
        return 1;
    } else {
        return 0;
    }
}
bool Students::setAddress(string a) {
    if (validateInput(a)) {
        address = a;
        return 1;
    } else {
        return 0;
    }
}
bool Students:: setStudentID(int sID) {
	if (validateInput(d)) {
		studentID = d;
		return 1;
	} else {
		return 0;
	}
}
bool Students:: setEducationLevel(int l) {
    if (validateInput(l)) {
        educationLevel = l;
        return 1;
    } else {
        return 0;
    }
}

// Accessors (Getters)
string Students::getName() {
    return name;
}
string Students::getEmail() {
    return email;
}
string Students::getAddress() {
    return address;
}
int Students::getStudentID() {
    return studentID;
}
int Students::getEducationLevel() {
    return educationLevel;
}


//Name: Angie Diaz
//Date: 3/1/24
//CPSC 1021
//Lab 5: Parking Permits
//File: Customers.cpp
//Desc: File containing Employee class method definitions

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