// Name: Dylan Harvey
// Date: 4/1/2024
// Class: CPSC 1021
// Lab Name: Lab09 - Area Calculation using Inheritance and Polymorphism
// File Name: Trapezoid.cpp
// Desc: Sourcefile for class Trapezoid, calculates area

#include "Trapezoid.h"

// implement getArea()
// Returns area of the trapezoid
template <typename T>
T Trapezoid<T>::getArea() {
    return ((base1 + base2) * (height / 2));
}
