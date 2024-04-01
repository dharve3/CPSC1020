// Name: Dylan Harvey
// Date: 4/1/2024
// Class: CPSC 1021
// Lab Name: Lab09 - Area Calculation using Inheritance and Polymorphism
// File Name: Square.cpp
// Desc: Sourcefile for class Square, calculates area

#include "Square.h"

// implement getArea()
// Returns area of the square
template <typename T>
T Square<T>::getArea() {
    return (side * side);
}