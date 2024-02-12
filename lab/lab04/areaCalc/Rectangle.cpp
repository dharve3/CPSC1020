// Name: Dylan Harvey
// Date: 2/12/2024
// Class: CPSC 1021
// Lab Name: Lab 4 - Areas Calculation w/ Member Initalization
// File Name: Rectangle.cpp
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