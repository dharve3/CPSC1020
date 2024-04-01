// Name: Dylan Harvey
// Date: 3/25/2024
// Class: CPSC 1021
// Lab Name: Lab08 - Inheritance and Polymorphism
// File Name: Circle.h
// Desc: Headerfile for class Circle, child class of Shape

#ifndef CIRCLE_H_
#define CIRCLE_H_

#include "Shape.h"

template <typename T> class Circle: public Shape<T> // inherit publically from Shape
{
private:
    double radius;
    const double PI = 3.14;
public: 
    //default constructor
    Circle();
    //argument constructor 
    Circle(double r): Shape("Circle"), radius(r) {}

    //abstract function 
    double getArea();
};

#endif // CIRCLE_H_