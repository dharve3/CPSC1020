// This program demonstrates a simple class 'Circle' split into separate files
#include <iostream>
#include <cmath>
#include "Circle.h"

using namespace std;

int main()
{
  Circle circle1; // default constructor will assign 1.0 to radius

  Circle circle2; // default constructor will assign 1.0 to radius
  circle2.setRadius(2.5); // setter function is called to assign 2.5 to radius

  Circle circle3(2.5); // constructor will assign 2.5 to radius
  
  cout << "The area of circle1 is " << circle1.calcArea() << endl;
  cout << "The area of circle2 is " << circle2.calcArea() << endl;
  cout << "The area of circle3 is " << circle3.calcArea() << endl;
  
  return 0;
}

