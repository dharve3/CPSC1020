// Circle.cpp is the function implementation file
#include <cmath>
#include "Circle.h"

// default constructor assigns value to member variable
// (but see recommendations in slides that in-class
// initialization is usually preferred)
Circle::Circle()
{ radius = 1.0; }


// overloaded constructor assigns user provided
// value to member variable
Circle::Circle(double r)
{ radius = r; }


// mutator/setter function
void Circle::setRadius(double r)
{
  if (r >= 0.0)
    radius = r;
  // else leave ut set to its previous value
}

// acessor/getter function
double Circle::calcArea()
{ return 3.14 * pow(radius, 2); }
  
