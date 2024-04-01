// Name: Dylan Harvey
// Date: 3/25/2024
// Class: CPSC 1021
// Lab Name: Lab08 - Inheritance and Polymorphism
// File Name: Rectangle.cpp
// Desc: Sourcefile for class Rectangle, calculates area

#include "Rectangle.h"

// implement getArea()
// Returns area of the rectangle
template <typename T> T Rectangle<T>::getArea() {
    return (length * width);
}