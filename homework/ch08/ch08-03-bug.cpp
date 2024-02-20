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
    double total, average;
    // Define a vector of  Circle objects. Use an initialization list
    // to call the 1-argument constructor for the objects.
    vector<Circle> circles {0.0, 2.0, 2.5, 56.0, 75.0, 5.0}; // Fixed vector syntax, fixed initalziation list syntax

    // Display the area of each object
    cout << "\nHere are the areas of the " << circles.size()
         << " circles.\n";
    for (Circle x : circles) { // Fixed the PYTHON for loop "for (Circle x in circles)" (lol) using range-based for loop
      cout << "circle " << setw(8) << fixed << setprecision(2) << x.findArea() << endl;
      total += x.findArea(); // Keep running total of areas
    }

    average = total / circles.size(); // Calculate average area
    cout << "The average area of these circles is: " << average << endl;
    return 0;
}