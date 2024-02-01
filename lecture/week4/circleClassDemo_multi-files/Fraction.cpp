// Fraction.cpp is the function implementation file
#include <cmath>
#include "Fraction.h"

// mutator/setter function
void Fraction::setNum(int n)
{
  num = n;
}
void Fraction::setDen(int d)
{
  den = d;
}
void Fraction::setNumDen(int n, int d)
{
  // num = n;
  // den = d;
  setNum(n);
  setDen(d);
}

// acessor/getter function
double Fraction::value()
{
  return (double)num / den;
}
  
