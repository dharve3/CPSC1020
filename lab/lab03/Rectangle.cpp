// Rectangle.cpp
// Initalizes functions for class Rectangle
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