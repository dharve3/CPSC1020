// Angie Diaz
// CPSC 1021
// File: Circle.cpp
// Lab 8
// Date: 3/25/2024

#ifndef TRAPEZOID_H_
#define TRAPEZOID_H_

#include "Shape.h"

class Trapezoid: public Shape  // inherit publically from Shape
{
    private:
        double base1;
        double base2;
        double height;
    public: 
        //default constructor
        Trapezoid();
        //argument constructor
        Trapezoid(double b1, double b2, double h): base1(b1), base2(b2), height(h), Shape("Trapezoid") {}

        //abstract function
        double getArea();
};

#endif