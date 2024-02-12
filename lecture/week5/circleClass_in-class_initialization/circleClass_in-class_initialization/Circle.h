// Circle.h is the class specification file
#ifndef CIRCLE_H_
#define CIRCLE_H_

class Circle
{
private:
  double radius {1.0}; // radius initialized to 1.0 when default constructor is called at object creation

public:
  Circle() = default; // default constructor explicitly stated
  Circle(double); // overloaded constructor that allows assigning 
                  // a value to radius when object is created
  
  void setRadius(double);
  double calcArea();
};

#endif
