// My Name: Dylan Harvey
// My Class: CPSC 1021
// Date: 1/29/2024
// Desc: Calculates the charges the paitent will have to pay based on the services they recieved
// Time: ~1 hr

#include "validateUserInput.h"
#include "calcTotalCharges.h"

int main() {
	char type;
	double day, rate, service, medicine, total;
	cout << "This program will calculate a patient's hospital charges." << endl;
	
	while (type != 'I' && type != 'O') {        // validates user input 
		cout << "Enter I for in-patient or O for out-patient: ";
		cin >> type;
	}
	if (type == 'I') {   // conditions for inpatients
		cout << "Number of days in the hospital: ";
		cin >> day;
		if (validateUserInput(day) == false) {  // calls validateUserInput to make sure input is not less than 0
			day = 0.0;
		}
		cout << "Daily room rate ($): ";
		cin >> rate;
		if (validateUserInput(rate) == false) {
			rate = 0.0;     // if input is less than 0, will set to default value: 0
		}
		cout << "Lab fees and other service charges ($) : ";
		cin >> service;
		if (validateUserInput(service) == false) {
			service = 0.0;
		}
		cout << "Medication charges ($) : ";
		cin >> medicine;
		if (validateUserInput(medicine) == false) {
            medicine = 0.0;
        }
		total = calcTotalCharges(day, rate, service, medicine);  // sends arguments to calcTotal to have total cost
		cout << "Your total hospital bills is $" << fixed << setprecision(2) << total << endl;

	} else {  // conditions for outpatients
		 cout << "Lab fees and other service charges ($) : ";
                cin >> service;
                if (validateUserInput(service) == false) {
                    service = 0.0;
                }
                cout << "Medication charges ($) : ";
                cin >> medicine;
                if (validateUserInput(medicine) == false) {
                    medicine = 0.0;
                }
                total = calcTotalCharges(service, medicine); //sends arguments to calcTotal (overloaded) for cost
                cout << "Your total hospital bills is $" << fixed << setprecision(2) << total << endl;  


	}

	return 0;
}

