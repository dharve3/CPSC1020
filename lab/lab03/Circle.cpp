// Circle.cpp
// Initalizes functions for class Circle
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