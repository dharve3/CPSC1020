// Name: Dylan Harvey
// Date: 2/12/2024
// Class: CPSC 1021
// Lab Name: Lab 4 - Areas Calculation w/ Member Initalization
// File Name: Circle.h
// Desc: Contains class Circle - Defines variables and functions

#ifndef CIRCLE_H
#define CIRCLE_H

#include <cmath>

const double PI = 3.14159;

class Circle
{
private:
    double radius = 1.0;
public:
    Circle(double value) : radius{value} { }
    Circle() = default; // default constructor
    void setRadius(double);
    double getRadius();
    double calcArea();
};

#endif