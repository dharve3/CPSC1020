// My Name: Dylan Harvey
// My Class: CPSC 1021
// Date: 2/6/2024
// Lab name: Lab 3 - Areas Calculation
// File name: Circle.h
// Desc: Contains class Circle - Defines variables and functions

#ifndef CIRCLE_H
#define CIRCLE_H

#include <cmath>

const double PI = 3.14159;

class Circle
{
private:
    double radius;

public:
    void setRadius(double);
    double getRadius();
    double calcArea();
};

#endif