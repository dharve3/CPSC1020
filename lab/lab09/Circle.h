// Name: Dylan Harvey
// Date: 4/1/2024
// Class: CPSC 1021
// Lab Name: Lab09 - Area Calculation using Inheritance and Polymorphism
// File Name: Circle.h
// Desc: Headerfile for class Circle, child class of Shape

#ifndef CIRCLE_H_
#define CIRCLE_H_

#include "Shape.h"

template <typename T>
class Circle: public Shape<T> // inherit publically from Shape
{
private:
    T radius;
    const double PI = 3.14;
public: 
    //default constructor
    Circle();
    //argument constructor 
    Circle(T r): Shape<T>("Circle"), radius(r) {}

    //abstract function 
    T getArea();
};

#endif // CIRCLE_H_