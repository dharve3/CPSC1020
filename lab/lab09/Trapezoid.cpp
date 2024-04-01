// Name: Dylan Harvey
// Date: 3/25/2024
// Class: CPSC 1021
// Lab Name: Lab08 - Inheritance and Polymorphism
// File Name: Trapezoid.cpp
// Desc: Sourcefile for class Trapezoid, calculates area

#include "Trapezoid.h"

// implement getArea()
// Returns area of the trapezoid
T Trapezoid<T>::getArea() {
    return ((base1 + base2) * (height / 2));
}
