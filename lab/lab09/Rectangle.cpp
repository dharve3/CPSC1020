// Name: Dylan Harvey
// Date: 4/1/2024
// Class: CPSC 1021
// Lab Name: Lab09 - Area Calculation using Inheritance and Polymorphism
// File Name: Rectangle.cpp
// Desc: Sourcefile for class Rectangle, calculates area

#include "Rectangle.h"

// implement getArea()
// Returns area of the rectangle
template <typename T>
T Rectangle<T>::getArea() {
    return (length * width);
}