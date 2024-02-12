// My Name: Dylan Harvey
// My Class: CPSC 1021
// Date: 2/6/2024
// Lab name: Lab 3 - Areas Calculation
// File name: Square.cpp
// Desc: Initalizes functions for class Square

#include "Square.h"

void Square::setSide(double s)
{
    side = s;
}

double Square::getSide()
{
    return side;
}

double Square::calcArea()
{
    return (side * side);
}