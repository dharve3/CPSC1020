#ifndef CALCTOTALCHARGES_H
#define CALCTOTALCHARGES_H

#include <iostream>

using namespace std;

// Prototype for outpatients, only adds service and medical costs, returns total
double calcTotalCharges(double hospitalServ, double medical);
// Prototype for inpatients, multiplies days and rate, adds to services and medical, returns total
double calcTotalCharges(double Days, double Rate, double hospitalServ, double medical);

#endif