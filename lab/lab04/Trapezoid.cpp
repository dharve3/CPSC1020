// My Name: Dylan Harvey
// My Class: CPSC 1021
// Date: 2/6/2024
// Lab name: Lab 3 - Areas Calculation
// File name: Trapezoid.cpp
// Desc: Initalizes functions for class Trapezoid

#include "Trapezoid.h"

void Trapezoid::setBase1(double b1)
{
    base1 = b1;
}

double Trapezoid::getBase1()
{
    return base1;
}

void Trapezoid::setBase2(double b2)
{
    base2 = b2;
}

double Trapezoid::getBase2()
{
    return base2;
}

void Trapezoid::setHeight(double h)
{
    height = h;
}

double Trapezoid::getHeight()
{
    return height;
}

double Trapezoid::calcArea()
{
    return ((base1 + base2) * height / 2);
}