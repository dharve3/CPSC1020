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
    double length = 1.0;
    double width = 1.0;
public:
    Rectangle(double value1, double value2) : length{value1}, width{value2} { }
    Rectangle() = default; // default constructor
    void setLength(double);
    double getLength();
    void setWidth(double);
    double getWidth();
    double calcArea();
};

#endif