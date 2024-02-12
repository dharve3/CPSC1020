// My Name: Dylan Harvey
// My Class: CPSC 1021
// Date: 2/12/2024
// Lab name: Lab 4 - Areas Calculation w/ Member Initalization
// File name: Trapezoid.h
// Desc: Contains class Trapezoid - Defines variables and functions

#ifndef TRAPEZOID_H
#define TRAPEZOID_H

class Trapezoid
{
private:
    double base1 = 1.0;
    double base2 = 1.0;
    double height = 1.0;
public:
    Trapezoid(double value1, double value2, double value3) : base1{value1}, base2{value2}, height{value3} { }
    Trapezoid() = default; // default constructor
    void setBase1(double);
    double getBase1();
    void setBase2(double);
    double getBase2();
    void setHeight(double);
    double getHeight();
    double calcArea();
};

#endif