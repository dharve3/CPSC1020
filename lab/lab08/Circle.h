// Angie Diaz
// CPSC 1021
// File: Circle.h
// Lab 8
// Date: 3/25/24

#ifndef CIRCLE_H_
#define CIRCLE_H_

#include "Shape.h"

class Circle: public Shape // inherit publically from Shape
{
private:
    const double PI=3.14;
    double radius;
public: 
    //default constructor
    Circle();
    //argument constructor 
    Circle(double r): radius(r), Shape("Circle") {}
    //abstract function 
    double getArea();
};

#endif
