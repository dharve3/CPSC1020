// Name: Dylan Harvey
// Date: 4/1/2024
// Class: CPSC 1021
// Lab Name: Lab09 - Area Calculation using Inheritance and Polymorphism
// File Name: Circle.cpp
// Desc: Sourcefile for class Circle, calculates area

#include "Circle.h"

// implement getArea()
// Returns area of the circle
template <typename T>
T Circle<T>::getArea() {
    return (PI * (radius * radius));
}