#ifndef RECTANGLE_H_
#define RECTANGLE_H_

#include "Shape.h"

class Rectangle : public Shape
{
private:
  double length;
  double width;

public:
  Rectangle() = default;
  Rectangle(double length, double width) : Shape("Rectangle"), length{length}, width{width} {}

  virtual double getArea() override
  {
    return length * width;
  }

};

#endif
