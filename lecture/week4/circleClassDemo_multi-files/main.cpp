// This program demonstrates a simple class 'Circle' split into separate files
#include <iostream>
#include <cmath>
#include "Circle.h"

using namespace std;

int main()
{
  Circle circle1, // first instance of class Circle
    circle2; // second instance of class Circle

  circle1.setRadius(1.0);
  circle2.setRadius(2.5);
    
  cout << "The area of circle1 is " << circle1.calcArea() << endl;
  cout << "The area of circle2 is " << circle2.calcArea() << endl;
  
  return 0;
}

