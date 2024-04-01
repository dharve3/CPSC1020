// Name: Dylan Harvey
// Date: 3/25/2024
// Class: CPSC 1021
// Lab Name: Lab08 - Inheritance and Polymorphism
// File Name: main.cpp
// Desc: Showcases derived classes and objects using inheritance and polymorphism

#include "Shape.h"
#include "Rectangle.h"
#include "Square.h"
#include "Circle.h"
#include "Trapezoid.h"
#include <iostream>
#include <iomanip>

#include <vector>

using namespace std;

int main()
{
    // Objects with double initilization
    Circle<double> circle(2.0);
    Square<double> square(2.0);
    Rectangle<double> rectangle(2.5, 3.0);
    Trapezoid<double> trapezoid(2.5, 3.5, 4.0);

    // Objects with int initilzation
    Circle<int> circle1(2);
    Square<int> square1(2);
    Rectangle<int> rectangle1(2, 3);
    Trapezoid<int> trapezoid1(2, 6, 5);

    // make a vector 'vector<Type>shapeVect {element0, element1, element2, element3}'
    // vector needs type of the template class
    // To fix this, I used 2 vectors, but a solution would be to create a class to store these objects
    vector<Shape<auto>*> shapeVect {&circle, &square, &rectangle, &trapezoid, &circle1, &square1, &rectangle1, &trapezoid1};
    // where 'Type' is a pointer to class Shape and each element is the memory address
    // of one of objects you have instantiated above
    
    // use a range-based for loop to print the name and area of each object using
    // functions printName() and getArea() accessed through the base class pointer
    for (auto &v : shapeVect) {
        cout << fixed << setprecision(1) << "Area of " << v->printName() << " is: " << v->getArea() << endl;
    }

    return 0;
}
