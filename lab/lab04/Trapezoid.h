// My Name: Dylan Harvey
// My Class: CPSC 1021
// Date: 2/6/2024
// Lab name: Lab 3 - Areas Calculation
// File name: Trapezoid.h
// Desc: Contains class Trapezoid - Defines variables and functions

#ifndef TRAPEZOID_H
#define TRAPEZOID_H

class Trapezoid
{
private:
    double base1;
    double base2;
    double height;
public:
    void setBase1(double);
    double getBase1();
    void setBase2(double);
    double getBase2();
    void setHeight(double);
    double getHeight();
    double calcArea();
};

#endif