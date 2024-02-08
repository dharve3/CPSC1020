// My Name: Dylan Harvey
// My Class: CPSC 1021
// Date: 2/6/2024
// Lab name: Lab 3 - Areas Calculation
// File name: Rectangle.h
// Desc: Contains class Rectangle - Defines variables and functions

#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
private:
    double length;
    double width;
public:
    void setLength(double);
    double getLength();
    void setWidth(double);
    double getWidth();
    double calcArea();
};

#endif