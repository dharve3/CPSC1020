// Name: Dylan Harvey
// Date: 3/25/2024
// Class: CPSC 1021
// Lab Name: Lab08 - Inheritance and Polymorphism
// File Name: Trapezoid.h
// Desc: Headerfile for class Trapezoid, child class of Shape

#ifndef TRAPEZOID_H_
#define TRAPEZOID_H_

#include "Shape.h"

template <typename Type> class Trapezoid: public Shape<T>  // inherit publically from Shape
{
private:
    Type base1;
    Type base2;
    Type height;
public: 
    //default constructor
    Trapezoid();
    //argument constructor
    Trapezoid(Type b1, Type b2, Type h): Shape<Type>("Trapezoid"), base1(b1), base2(b2), height(h) {}

    //abstract function
    Type getArea();
};

#endif // TRAPEZOID_H_