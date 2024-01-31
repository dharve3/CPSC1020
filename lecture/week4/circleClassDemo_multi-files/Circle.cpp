// Circle.cpp is the function implementation file
#include <cmath>
#include "Circle.h"

// mutator/setter function
void Circle::setRadius(double r)
{
  radius = r;
}

// acessor/getter function
double Circle::calcArea()
{
  return 3.14 * pow(radius, 2);
}
  
