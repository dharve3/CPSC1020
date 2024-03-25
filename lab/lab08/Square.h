// Janaki Bhosale
// CPSC1021
// Date: March 25, 2024
// Description: Header file for square
// Time: 5 minutes

#ifndef SQUARE_H_
#define SQUARE_H_

#include "Shape.h"

class Square: public Shape // inherit publically from Shape
{
private:
    double side;
public:
    // default constructor
    Square();
    // argument constructor
    Square(double s): side(s), Shape("Square") {}

    // abstract function
    double getArea();
};

#endif
