// Name: Dylan Harvey
// Date: 3/25/2024
// Class: CPSC 1021
// Lab Name: Lab08 - Inheritance and Polymorphism
// File Name: Circle.h
// Desc: Headerfile for class Circle, child class of Shape

#ifndef CIRCLE_H_
#define CIRCLE_H_

#include "Shape.h"

template <typename Type> class Circle: public Shape<T> // inherit publically from Shape
{
private:
    Type radius;
    const double PI = 3.14;
public: 
    //default constructor
    Circle();
    //argument constructor 
    Circle(Type r): Shape<T>("Circle"), radius(r) {}

    //abstract function 
    Type getArea();
};

#endif // CIRCLE_H_