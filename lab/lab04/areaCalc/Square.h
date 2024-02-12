// My Name: Dylan Harvey
// My Class: CPSC 1021
// Date: 2/6/2024
// Lab name: Lab 3 - Areas Calculation
// File name: Square.h
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