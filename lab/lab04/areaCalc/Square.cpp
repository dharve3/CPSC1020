// Name: Dylan Harvey
// Date: 2/12/2024
// Class: CPSC 1021
// Lab Name: Lab 4 - Areas Calculation w/ Member Initalization
// File Name: Square.cpp
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