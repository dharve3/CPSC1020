// Name: Dylan Harvey
// Date: 2/12/2024
// Class: CPSC 1021
// Lab Name: Lab 4 - Paitent Charges w/ Classes
// File Name: Paitent.cpp
// Desc: 

#include "Patient.h"

bool Patient::validateInput(double v) {
	if (v >= 0) {
		return true;
	} else {
		return false;
	}
}
bool Patient::validateInput(int v) {
    if (v >= 0) {
        return true;
    } else {
        return false;
    }
}

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