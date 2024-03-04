// Customers.cpp

#include "Customers.h"


// Name: Dylan Harvey
// Date: 03/01/2024
// Class: CPSC 1021
// Lab Name: Lab05 - Parking Permits
// File Name: Customers.cpp
// Desc: Source file for Visitor Class (Type of customer), declares methods

// Validates that input is not empty for the string type
bool Visitor::validateInput(string v) {
    if (v.empty())
        return 0;
    else
        return 1;
}

// Validates that input is greater than or equal to 0 for int type
bool Visitor::validateInput(int v) {
    if (v < 0)
        return 0;
    else
        return 1;
}

// Validates that the input is a valid (0 or 1) for the bool type
bool Visitor::validateInput(bool v) {
    if (v != 0 && v != 1)
        return 0;
    else
        return 1;
}

// Mutators (Setters)
bool Visitor::setName(string n) {
    if (validateInput(n)) {
        name = n;
        return 1;
    } else {
        return 0;
    } 
}
bool Visitor::setEmail(string e) {
    if (validateInput(e)) {
        email = e;
        return 1;
    } else {
        return 0;
    }
}
bool Visitor::setAddress(string a) {
    if (validateInput(a)) {
        address = a;
        return 1;
    } else {
        return 0;
    }
}
bool Visitor::setRegNumber(int rN) {
    if (validateInput(rN)) {
        regNumber = rN;
        return 1;
    } else {
        return 0;
    }
}
bool Visitor::setFirstVisit(bool fV) {
    if (validateInput(fV)) {
        firstVisit = fV;
        return 1;
    } else {
        return 0;
    }
}

// Accessors (Getters)
string Visitor::getName() const {
    return name;
}
string Visitor::getEmail() const {
    return email;
}
string Visitor::getAddress() const {
    return address;
}
int Visitor::getRegNumber() const {
    return regNumber;
}
bool Visitor::getFirstVisit() const {
    return firstVisit;
}


// Name: Janaki Bhosale
// Date: 3/1/24
// CPSC 1021
// Lab 5: Parking Permits
// File: Customers.cpp
// Desc: File containing Student class definitons and functions


// Validates that input is not empty for the string type
bool Student::validateInput(string v) {
    if (v.empty())
        return 0;
    else
        return 1;
}

// Validates that input is greater than or equal to 0 for int type
bool Student::validateInput(int v) {
    if (v < 0)
        return 0;
    else
        return 1;
}

// Mutators (Setters)
bool Student::setName(string n) {
    if (validateInput(n)) {
        name = n;
        return 1;
    } else {
        return 0;
    }
}
bool Student::setEmail(string e) {
    if (validateInput(e)) {
        email = e;
        return 1;
    } else {
        return 0;
    }
}
bool Student::setAddress(string a) {
    if (validateInput(a)) {
        address = a;
        return 1;
    } else {
        return 0;
    }
}
bool Student:: setStudentID(int sID) {
	if (validateInput(sID)) {
		studentID = sID;
		return 1;
	} else {
		return 0;
	}
}
bool Student:: setEducationLevel(int l) {
    if (validateInput(l)) {
        educationLevel = l;
        return 1;
    } else {
        return 0;
    }
}

// Accessors (Getters)
string Student::getName() const {
    return name;
}
string Student::getEmail() const {
    return email;
}
string Student::getAddress() const {
    return address;
}
int Student::getStudentID() const {
    return studentID;
}
int Student::getEducationLevel() const {
    return educationLevel;
}


//Name: Angie Diaz
//Date: 3/1/24
//CPSC 1021
//Lab 5: Parking Permits
//File: Customers.cpp
//Desc: File containing Employee class method definitions

// Validates that input is not empty for the string type
bool Employee::validateInput(string v) {
    if (v.empty())
        return 0;
    else
        return 1;
}

// Validates that input is greater than or equal to 0 for int type
bool Employee::validateInput(int v) {
    if (v < 0)
        return 0;
    else
        return 1;
}

// Mutators (Setters)
bool Employee::setName(string n) {
    if (validateInput(n)) {
        name = n;
        return 1;
    } else {
        return 0;
    }
}
bool Employee::setEmail(string e) {
    if (validateInput(e)) {
        email = e;
        return 1;
    } else {
        return 0;
    }
}
bool Employee::setAddress(string a) {
    if (validateInput(a)) {
        address = a;
        return 1;
    } else {
        return 0;
    }
}
bool Employee:: setEmployeeID(int d) {
	if (validateInput(d)) {
		employeeID = d;
		return 1;
	} else {
		return 0;
	}
}
bool Employee:: setYearsEmployed(int y) {
    if (validateInput(y)) {
        yearsEmployed = y;
        return 1;
    } else {
        return 0;
    }
}

// Accessors (Getters)
string Employee::getName() const {
    return name;
}
string Employee::getEmail() const {
    return email;
}
string Employee::getAddress() const {
    return address;
}
int Employee::getEmployeeID() const {
    return employeeID;
}
int Employee::getYearsEmployed() const {
    return yearsEmployed;
}