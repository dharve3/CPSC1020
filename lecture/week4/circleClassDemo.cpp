// This program demonstrates a simple class 'Circle'
// The demo shows how to write a class declaration and
// how to use the class to instantiate two objects from it

#include <iostream>
#include <cmath>
using namespace std;


// Class declaration
class Circle
{
private:
  double radius;

public:
  void setRadius(double r)
  { radius = r; }

  double calcArea()
  { return 3.14 * pow(radius, 2); }
};


int main()
{
  Circle circle1, // first instance of class Circle; this creates object 'circle1'
    circle2; // second instance of class Circle; this creates object 'circle2'

  circle1.setRadius(1.0);
  circle2.setRadius(2.5);
    
  cout << "The area of circle1 is " << circle1.calcArea() << endl;
  cout << "The area of circle2 is " << circle2.calcArea() << endl;
  
  return 0;
}

