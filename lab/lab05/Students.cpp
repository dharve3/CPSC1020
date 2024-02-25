// Name: Janaki Bhosale
// Date: 3/1/24
// CPSC 1021
// Lab 5: Parking Permits
// File: Students.cpp
// Desc: File containing Student class definitons and functions

#include "Students.h"

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
