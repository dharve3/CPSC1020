// Name: Dylan Harvey
// Date: 2/12/2024
// Class: CPSC 1021
// Lab Name: Lab 4 - Areas Calculation w/ Member Initalization
// File Name: Square.h
// Desc: Contains class Square - Defines variables and functions

#ifndef SQUARE_H
#define SQUARE_H

class Square
{
private:
    double side = 1.0;
public:
    Square(double value) : side{value} { }
    Square() = default;
    void setSide(double);
    double getSide();
    double calcArea();
};

#endif