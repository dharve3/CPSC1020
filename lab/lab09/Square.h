// Name: Dylan Harvey
// Date: 3/25/2024
// Class: CPSC 1021
// Lab Name: Lab08 - Inheritance and Polymorphism
// File Name: Square.h
// Desc: Headerfile for class Square, child class of Shape

#ifndef SQUARE_H_
#define SQUARE_H_

#include "Shape.h"

template <typename Type> class Square: public Shape<Type> // inherit publically from Shape
{
private:
    Type side;
public:
    // default constructor
    Square();
    // argument constructor
    Square(Type s): Shape<Type>("Square"), side(s) {}

    // abstract function
    Type getArea();
};

#endif // SQUARE_H_