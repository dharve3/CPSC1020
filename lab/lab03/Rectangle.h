// Rectangle.h
// Contains class Rectangle - Defines variables and functions
#ifndef RECTANGLE_H_
#define RECTANGLE_H_

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