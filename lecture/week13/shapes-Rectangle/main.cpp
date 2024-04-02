#include "Rectangle.h"
#include <iostream>
#include <iomanip>

#include <vector>

using namespace std;

int main()
{
  cout << fixed << showpoint << setprecision(1);

  // Rectangle object with type double
  Rectangle rectangleDouble{2.5,3.0};

  Shape * basePtrDouble = &rectangleDouble;
  cout << basePtrDouble->getArea() << endl;


  
   return 0;
}
