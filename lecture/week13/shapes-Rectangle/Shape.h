#ifndef SHAPE_H_
#define SHAPE_H_

#include <string>

class Shape
{
private:
  std::string name;
public:
  Shape() = default;
  Shape(std::string name) : name(name) {};

  virtual std::string printName() final
  { return name; }

  virtual double getArea() = 0;

};

#endif
