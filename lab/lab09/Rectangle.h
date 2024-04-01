// Name: Dylan Harvey
// Date: 3/25/2024
// Class: CPSC 1021
// Lab Name: Lab08 - Inheritance and Polymorphism
// File Name: Rectangle.h
// Desc: Headerfile for class Rectangle, child class of Shape

#ifndef RECTANGLE_H_
#define RECTANGLE_H_

#include "Shape.h"

template <typename T> class Rectangle: public Shape<T> // inherit publically from Shape
{
private:
    double length;
    double width;
public:
    // default constructor
    Rectangle();
    // argument constructor
    Rectangle(double l, double w): Shape("Rectangle"), length(l), width(w) {}

    // abstract function
    double getArea();
};

#endif // RECTANGLE_H_