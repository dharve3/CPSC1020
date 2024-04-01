// Name: Dylan Harvey
// Date: 3/25/2024
// Class: CPSC 1021
// Lab Name: Lab08 - Inheritance and Polymorphism
// File Name: Rectangle.h
// Desc: Headerfile for class Rectangle, child class of Shape

#ifndef RECTANGLE_H_
#define RECTANGLE_H_

#include "Shape.h"

template <typename Type> class Rectangle: public Shape<Type> // inherit publically from Shape
{
private:
    Type length;
    Type width;
public:
    // default constructor
    Rectangle();
    // argument constructor
    Rectangle(Type l, Type w): Shape<Type>("Rectangle"), length(l), width(w) {}

    // abstract function
    Type getArea();
};

#endif // RECTANGLE_H_