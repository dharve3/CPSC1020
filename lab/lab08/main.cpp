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
    // make an object named 'circle' from class Circle with radius initialized to 2.0
    Circle circle(2.0);
    // make an object named 'square' from class Square with side initialized to 2.0
    Square square(2.0);
    // make an object named 'rectangle' from class Rectangle with length initialized to 2.5 and width to 3.0
    Rectangle rectangle(2.5, 3.0);
    // make an object named 'trapezoid' from class Trapezoid with base1 initialized to 2.5, base2 to 3.5, and height to 4.0
    Trapezoid trapezoid(2.5, 3.5, 4.0);

    // make a vector 'vector<Type>shapeVect {element0, element1, element2, element3}'
    vector<Shape*>shapeVect {&circle, &square, &rectangle, &trapezoid};
    // where 'Type' is a pointer to class Shape and each element is the memory address
    // of one of objects you have instantiated above
    
    // use a range-based for loop to print the name and area of each object using
    // functions printName() and getArea() accessed through the base class pointer
    for (auto &v : shapeVect) {
        cout << fixed << setprecision(1) << "Area of " << v->printName() << " is: " << v->getArea() << endl;
    }

    return 0;
}
