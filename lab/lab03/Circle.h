// Circle.h
// Contains class Circle - Defines variables and functions
#ifndef CIRCLE_H_
#define CIRCLE_H_

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