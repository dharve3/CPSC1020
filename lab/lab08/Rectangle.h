// Janaki Bhosale
// CPSC1021
// Date: March 25, 2024
// Description: Header file for rectangle
// Time: 5 minutes

#ifndef RECTANGLE_H_
#define RECTANGLE_H_

#include "Shape.h"

class Rectangle: public Shape // inherit publically from Shape
{
    private:
        double length;
        double width;
    public:
        // default constructor
        Rectangle();

        // argument constructor
        Rectangle(double l, double w): Shape("Rectangle"), length(l), width(w) {}

        // abstract function
        double getArea();
};

#endif
