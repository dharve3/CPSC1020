// Name: Dylan Harvey
// Date: 3/15/2024
// Class: CPSC 1021
// Lab Name: Lab 7: Challenge 3 - Corporate Sales
// File Name: DivSales.cpp
// Desc: 

#include "DivSales.h"

double DivSales::totalSales = 0;

DivSales::DivSales() {
    sales.resize(4);
    divSales = 0;
}

void DivSales::setSales(double s[]) {
    for (int i = 0; i < 4; ++i) {
        sales[i] = s[i];
        divSales += s[i];
        totalSales += s[i];
    }
}

double DivSales::getDivSales() const {
    return divSales;
}

double DivSales::getCorpSales() const {
    return totalSales;
}