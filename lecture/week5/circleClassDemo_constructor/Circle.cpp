// Circle.cpp is the function implementation file
#include <cmath>
#include "Circle.h"

// default constructor setting default value,
// but consider in-place initialization instead
Circle::Circle()
{
  radius = 1.0;
}

// mutator/setter function
void Circle::setRadius(double r)
{
  if (r >= 0.0)
    radius = r;
  // now with the constructor setting radius = 1.0,
  // we can validate user input by only allowing values >=0
}

// acessor/getter function
double Circle::calcArea()
{
  return 3.14 * pow(radius, 2);
}
  
