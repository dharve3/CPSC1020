// Name: Dylan Harvey
// Date: 3/15/2024
// Class: CPSC 1021
// Lab Name: Lab 7: Challenge 3 - Corporate Sales
// File Name: DivSales.h
// Desc: Headerfile for DivSales class

#ifndef DIVSALES_H
#define DIVSALES_H

#include <vector>

class DivSales {
private:
    std::vector<double> sales;
    double divSales;
    static double totalSales;

public:
    DivSales();

    void setSales(double s[]);
    double getDivSales() const;
    static double getCorpSales();
};

#endif // DIVSALES_H