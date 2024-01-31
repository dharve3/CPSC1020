// My Name: Dylan Harvey
// My Class: CPSC 1021
// Date: 1/29/2024
// Desc: Contains overloaded functions that adds total charges depending on arguments sent
// Time: 10 min


#include "calcTotalCharges.h"

//function for outpatients, only adds service and medical costs, returns total
double calcTotalCharges(double hospitalServ, double medical) {
	double sum;
	sum = hospitalServ + medical;
	return sum;
}

//function for inpatients, multiplies days and rate, adds to services and medical, returns total
double calcTotalCharges(double Days, double Rate, double hospitalServ, double medical) {
	double sum;
	sum = Days * Rate + hospitalServ + medical;
	return sum;
}

