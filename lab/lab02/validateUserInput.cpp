// My Name: Dylan Harvey
// My Class: CPSC 1021
// Date: 1/29/2024
// Desc: Contains function to validate user input
// Time: <5 min

#include "validateUserInput.h"


// Checks to see if argument is greater than 0, returns T/F
bool validateUserInput(double input) {
	if (input < 0) {
		return false;
	} else {
		return true;
	}
}
