// Circle.h is the class specification file
#ifndef CIRCLE_H_
#define CIRCLE_H_

class Circle
{
private:
  double radius;

public:
  Circle(); // default constructor
  Circle(double); // overloaded constructor that allows assigning 
                  // a value to radius when object is created
  
  void setRadius(double);
  double calcArea();
};

#endif
