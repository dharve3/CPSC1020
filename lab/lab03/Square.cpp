#include "Square.h"

void Square::setSide(double s)
{
    side = s;
}

double Square::getSide()
{
    return side;
}

double Square::calcArea()
{
    return (side * side);
}