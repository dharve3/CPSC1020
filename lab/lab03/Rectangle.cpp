// My Name: Dylan Harvey
// My Class: CPSC 1021
// Date: 2/6/2024
// Lab name: Lab 3 - Areas Calculation
// File name: Rectangle.cpp
// Desc: Initalizes functions for class Rectangle

#include "Rectangle.h"

void Rectangle::setLength(double l)
{
    length = l;
}

double Rectangle::getLength()
{
    return length;
}

void Rectangle::setWidth(double w)
{
    width = w;
}

double Rectangle::getWidth()
{
    return width;
}

double Rectangle::calcArea()
{
    return (length * width);
}