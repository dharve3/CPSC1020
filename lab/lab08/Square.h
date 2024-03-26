// Name: Dylan Harvey
// Date: 3/25/2024
// Class: CPSC 1021
// Lab Name: Lab08 - Inheritance and Polymorphism
// File Name: Square.h
// Desc: Headerfile for class Square, child class of Shape

#ifndef SQUARE_H_
#define SQUARE_H_

#include "Shape.h"

class Square: public Shape // inherit publically from Shape
{
private:
    double side;
public:
    // default constructor
    Square();
    // argument constructor
    Square(double s): Shape("Square"), side(s) {}

    // abstract function
    double getArea();
};

#endif // SQUARE_H_