// Name: Dylan Harvey
// Date: 3/25/2024
// Class: CPSC 1021
// Lab Name: Lab08 - Inheritance and Polymorphism
// File Name: Trapezoid.h
// Desc: Headerfile for class Trapezoid, child class of Shape

#ifndef TRAPEZOID_H_
#define TRAPEZOID_H_

#include "Shape.h"

class Trapezoid: public Shape  // inherit publically from Shape
{
private:
    double base1;
    double base2;
    double height;
public: 
    //default constructor
    Trapezoid();
    //argument constructor
    Trapezoid(double b1, double b2, double h): Shape("Trapezoid"), base1(b1), base2(b2), height(h) {}

    //abstract function
    double getArea();
};

#endif // TRAPEZOID_H_