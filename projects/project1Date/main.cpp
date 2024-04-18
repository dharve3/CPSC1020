// Name: Dylan Harvey
// Class: CPSC 1020
// Date: 2/9/2024
// Project 1
// Time: ~4 Hours
// Desc: Determines the length of isolation required based on COVID exposure from user input.

#include <iostream>
#include <string>
#include "Date.h"
#include "calcDays.h"

using namespace std;

int main( ) {
	string testResult;

	// Input for test result
    cout << "Test result: ";
	cin >> testResult;

	if (testResult == "positive") {
		int posMonth, posDay, posYear;
		char slash;

		// Input for date tested positive
		cout << "Date tested positive: ";
		cin >> posMonth >> slash >> posDay >> slash >> posYear;

		// Instantiation for datePositive
		Date datePositive;
		datePositive = Date(posDay, posMonth, posYear);

		cout << "Length of isolation: 7 days\n";
		// Case 1

	} else {
		string exposed;
		bool exposedToPositive = false;

		cout << "Exposed to positive case: ";
		cin >> exposed;
		exposedToPositive = (exposed == "Yes");

		if (exposedToPositive) {
			int expMonth, expDay, expYear;
			char slash;
			string secondDoseReceived;

			// Input for date exposed
			cout << "Date exposed to positive case: ";
			cin >> expMonth >> slash >> expDay >> slash >> expYear;

			// Instantiation for dateExposed
			Date dateExposed;
			dateExposed = Date(expDay, expMonth, expYear);

			// Input for second vaccination dose y/n
			cout << "Second vaccination dose received: ";
			cin >> secondDoseReceived;

			if (secondDoseReceived == "Yes") {
				int secMonth, secDay, secYear;
				char slash;
				
				// Input for second vaccination dose date
				cout << "Date second vaccination dose received: ";
				cin >> secMonth >> slash >> secDay >> slash >> secYear;

				// Instantiation for dateSecondDose
				Date dateSecondDose;
				dateSecondDose = Date(secDay, secMonth, secYear);

				if (calcDays(dateSecondDose, dateExposed) >= 14) {
					// cout << "TRUE DEBUG: dateSecondDose: " << dateSecondDose.showDate() << endl;
					// cout << "TRUE DEBUG: dateExposed: " << dateExposed.showDate() << endl;
					// cout << "TRUE DEBUG: " << calcDays(dateSecondDose, dateExposed) << endl;
					cout << "Vaccination status at time of exposure: fully vaccinated\n";
					cout << "Length of isolation: 3 days\n";
					// Case 3
				} else {
					// cout << "ELSE DEBUG: dateSecondDose: " << dateSecondDose.showDate() << endl;
					// cout << "ELSE DEBUG: dateExposed: " << dateExposed.showDate() << endl;
					// cout << "ELSE DEBUG: " << calcDays(dateSecondDose, dateExposed) << endl;
					cout << "Vaccination status at time of exposure: not fully vaccinated\n";
					cout << "Length of isolation: 12 days\n";
					// Case 4 (1)
				}
			} else {

				cout << "Vaccination status at time of exposure: not fully vaccinated\n";
				cout << "Length of isolation: 12 days\n";
				// Case 4 (2)
			}

		} else {
			cout << "Length of isolation: 0 days\n";
			// Case 2
		}
	}

	return 0;
}
