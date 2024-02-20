// This program demonstrates how an overloaded constructor
// that accepts an argument can be invoked for multiple objects
// when an array of objects is created.
#include <iostream>
#include <iomanip>
#include <vector>
#include "Circle.h"         // Circle class declaration file
using namespace std;

int main()
{
    // Define a vector of  Circle objects. Use an initialization list
    // to call the 1-argument constructor for the objects.
    vector(Circle) circles (0.0, 2.0, 2.5, 56.0, 75.0, 5.0);

    // Display the area of each object
    cout << "\nHere are the areas of the " << circles.size()
         << " circles.\n";
    for (Circle x in circles) {
      cout << "circle " << setw(8) << x.findArea() << endl;
    }

    cout << "The average area of these circles is: " << endl;
    return 0;
}