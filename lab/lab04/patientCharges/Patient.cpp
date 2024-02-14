// Name: Dylan Harvey
// Date: 2/12/2024
// Class: CPSC 1021
// Lab Name: Lab 4 - Paitent Charges w/ Classes
// File Name: Paitent.cpp
// Desc: Soruce file for Patient class, contains methods.

#include "Patient.h"

// Validates that input is greater than or equal to 0 for double type
bool Patient::validateInput(double v) {
	if (v >= 0) {
		return true;
	} else {
		return false;
	}
}
// Validates that input is greater than or equal to 0 for int type
bool Patient::validateInput(int v) {
    if (v >= 0) {
        return true;
    } else {
        return false;
    }
}

// Setter functions, usees validate to determine if it should use the provided value or set to a default value.
void Patient::setDays(int d) {
	if (validateInput(d)) {
		days = d;
	} else {
		days = 0;
	}
}
void Patient::setRate(double r) {
	if (validateInput(r)){
		rate = r;
	} else {
		rate = 0.0;
	}
}
void Patient::setServices(double s) {
	if (validateInput(s)) {
		services = s;
	} else {
		services = 0.0;
	}
}
void Patient::setMedication(double m) {
    if (validateInput(m)) {
        medication = m;
    } else {
        medication = 0.0;
    }
}
void Patient::setPatientType(char p) {
    if (p == 'O' || p == 'I') {
		patientType = p;
	} else {
		patientType = 'I';
	}
}

// Getter functions
int Patient::getDays() {
    return days;
}
double Patient::getRate() {
    return rate;
}
double Patient::getServices() {
    return services;
}
double Patient::getMedication() {
    return medication;
}
char Patient::getPatientType() {
    return patientType;
}

// Calculates the total charges based on the class variables, and the type determines the formula to use.
double Patient::calcTotalCharges() {
    double sum;
	if (patientType == 'I') {
		sum = days * rate + services + medication;
		return sum;
	} else {
		sum = services + medication;
		return sum;
	}
}