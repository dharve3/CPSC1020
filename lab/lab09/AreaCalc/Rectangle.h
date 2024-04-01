// Name: Dylan Harvey
// Date: 4/1/2024
// Class: CPSC 1021
// Lab Name: Lab09 - Area Calculation using Inheritance and Polymorphism
// File Name: Rectangle.h
// Desc: Headerfile for class Rectangle, child class of Shape

#ifndef RECTANGLE_H_
#define RECTANGLE_H_

#include "Shape.h"

template <typename T> 
class Rectangle: public Shape<T> // inherit publically from Shape
{
private:
    T length;
    T width;
public:
    // default constructor
    Rectangle();
    // argument constructor
    Rectangle(T l, T w): Shape<T>("Rectangle"), length(l), width(w) {}

    // abstract function
    T getArea();
};

template <typename T>
T Rectangle<T>::getArea() {
    return (length * width);
}

#endif // RECTANGLE_H_