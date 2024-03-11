// Name: Dylan Harvey
// Date: 3/15/2024
// Class: CPSC 1021
// Lab Name: Lab 7: Challenge 3 - Corporate Sales
// File Name: DivSales.cpp
// Desc: Sourcefile for DivSales class, contains functions to set, modify, and get the sales data.

#include "DivSales.h"

double DivSales::totalSales = 0;

DivSales::DivSales() {
    sales.resize(4, 0); // Initalize sales vector with all 4 elements set to 0
    divSales = 0;
}

// Function to set sales for a divison
void DivSales::setSales(double q1, double q2, double q3, double q4) {
    if (q1 >= 0 && q2 >= 0 && q3 >= 0 && q4 >= 0) {
        divSales = q1 + q2 + q3 + q4;
        totalSales += divSales; // Update total corporate sales
        sales = {q1, q2, q3, q4}; // Set the sales vector with q values
    }
}

double DivSales::getDivSales() const {
    return divSales;
}

double DivSales::getCorpSales() {
    return totalSales;
}