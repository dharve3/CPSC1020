// Name: Dylan Harvey
// Date: 2/12/2024
// Class: CPSC 1021
// Lab Name: Lab 4 - Paitent Charges w/ Classes
// File Name: hospitalCharges.cpp
// Desc: 

#include <iostream>
#include <iomanip>

#include "Patient.h"

using namespace std;

int main() {
	char type;
	double day, rate, services, medicine, total;
	cout << "This program will calculate a patient's hospital charges." << endl;
	
	while (type != 'I' && type != 'O') {        // validates user input 
		cout << "Enter I for in-patient or O for out-patient: ";
		cin >> type;
	}
	if (type == 'I') {   // conditions for inpatients
		cout << "Number of days in the hospital: ";
		cin >> day;
		if (Patient::validateUserInput(day) == false) {  // calls validateUserInput to make sure input is not less than 0
			day = 0.0;
		}
		cout << "Daily room rate ($): ";
		cin >> rate;
		if (Patient::validateUserInput(rate) == false) {
			rate = 0.0;     // if input is less than 0, will set to default value: 0
		}
		cout << "Lab fees and other service charges ($) : ";
		cin >> services;
		if (Patient::validateUserInput(services) == false) {
			services = 0.0;
		}
		cout << "Medication charges ($) : ";
		cin >> medicine;
		if (Patient::validateUserInput(medicine) == false) {
            medicine = 0.0;
        }
		total = Patient::calcTotalCharges(day, rate, services, medicine);  // sends arguments to calcTotal to have total cost
		cout << "Your total hospital bills is $" << fixed << setprecision(2) << total << endl;

	} else {  // conditions for outpatients
		cout << "Lab fees and other service charges ($) : ";
		cin >> services;
		if (Patient::validateUserInput(services) == false) {
			services = 0.0;
		}
		cout << "Medication charges ($) : ";
		cin >> medicine;
		if (Patient::validateUserInput(medicine) == false) {
			medicine = 0.0;
		}
		total = Patient::calcTotalCharges(services, medicine); //sends arguments to calcTotal (overloaded) for cost
		cout << "Your total hospital bills is $" << fixed << setprecision(2) << total << endl;  
	}

	return 0;
}

