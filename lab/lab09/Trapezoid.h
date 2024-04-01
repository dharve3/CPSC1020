// Name: Dylan Harvey
// Date: 4/1/2024
// Class: CPSC 1021
// Lab Name: Lab09 - Area Calculation using Inheritance and Polymorphism
// File Name: Trapezoid.h
// Desc: Headerfile for class Trapezoid, child class of Shape

#ifndef TRAPEZOID_H_
#define TRAPEZOID_H_

#include "Shape.h"

template <typename T>
class Trapezoid: public Shape<T>  // inherit publically from Shape
{
private:
    T base1;
    T base2;
    T height;
public: 
    //default constructor
    Trapezoid();
    //argument constructor
    Trapezoid(T b1, T b2, T h): Shape<T>("Trapezoid"), base1(b1), base2(b2), height(h) {}

    //abstract function
    T getArea();
};

template <typename T>
T Trapezoid<T>::getArea() {
    return (((base1 + base2) * height)/2);
}

#endif // TRAPEZOID_H_