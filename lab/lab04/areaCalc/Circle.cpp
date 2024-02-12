// Name: Dylan Harvey
// Date: 2/12/2024
// Class: CPSC 1021
// Lab Name: Lab 4 - Areas Calculation w/ Member Initalization
// File Name: Circle.cpp
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