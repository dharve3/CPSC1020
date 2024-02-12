// Circle.cpp is the function implementation file
#include <cmath>
#include "Circle.h"

// default constructor initializing member variable with default value
Circle::Circle() : radius {1.0} {}

// constructor used to initialize member variable with user provided value
Circle::Circle(double r) : radius {r} {}

// mutator/setter function
void Circle::setRadius(double r)
{
  if (r >= 0.0)
    radius = r;
  // else leave to its previous value
}

// acessor/getter function
double Circle::calcArea()
{ return 3.14 * pow(radius, 2); }
  
