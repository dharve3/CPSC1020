// Name: Dylan Harvey
// Date: 2/12/2024
// Class: CPSC 1021
// Lab Name: Lab 4 - Paitent Charges w/ Classes
// File Name: hospitalCharges.cpp
// Desc: Calculates the total cost of hospital bills depending on if they are an outpatient or inpatient, user enters ttheir information which is sent to functions to validate and calculate cost 

#include <iomanip>
#include <iostream>
#include "Patient.h"

using namespace std;

int main() {
    char type;
	int day = 0;
	double rate = 0.0, service, medicine;
	cout << "This program will calculate a patient's hospital charges."<<endl;

	while (type != 'I' && type != 'O') { // validates user input 
		cout << "Enter I for in-patient or O for out-patient: ";
		cin >> type;
	}
    if (type=='I') { // conditions for inpatients
		cout << "Number of days in the hospital: ";
		cin >> day; 
		cout << "Daily room rate ($): ";
		cin >> rate;
		cout << "Lab fees and other service charges ($) : ";
		cin >> service;
		cout << "Medication charges ($) : ";
		cin >> medicine;

		Patient patient1(type, day, rate, service, medicine); // creatings instance of object, sends all arguments
		cout << "Your total hospital bills is $" << fixed << setprecision(2) << patient1.calcTotalCharges() << endl; // prints by calling calcTotalCharges for object

	} else { // conditions for outpatients
		cout << "Lab fees and other service charges ($) : ";
		cin >> service;
		cout << "Medication charges ($) : ";
		cin >> medicine;

		Patient patient1(type, service, medicine); // creates instance of object, sends outpatient arguments
		cout << "Your total hospital bills is $" << fixed << setprecision(2) << patient1.calcTotalCharges() << endl; // prints by calling calcTotalCharges for object
	}
    return 0;
}
