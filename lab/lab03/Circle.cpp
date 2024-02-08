// My Name: Dylan Harvey
// My Class: CPSC 1021
// Date: 2/6/2024
// Lab name: Lab 3 - Areas Calculation
// File name: Circle.cpp
// Desc: Initalizes functions for class Circle

#include "Circle.h"

void Circle::setRadius(double r)
{
    radius = r;
}

double Circle::getRadius()
{
    return radius;
}
  
double Circle::calcArea()
{
    return PI * pow(radius, 2);
}