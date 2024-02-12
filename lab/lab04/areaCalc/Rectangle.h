// Name: Dylan Harvey
// Date: 2/12/2024
// Class: CPSC 1021
// Lab Name: Lab 4 - Areas Calculation w/ Member Initalization
// File Name: Rectangle.h
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