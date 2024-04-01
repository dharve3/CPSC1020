// Name: Dylan Harvey
// Date: 4/1/2024
// Class: CPSC 1021
// Lab Name: Lab09 - Area Calculation using Inheritance and Polymorphism
// File Name: Shape.h
// Desc: Headerfile for Shape class, parent class of many others

#ifndef SHAPE_H_
#define SHAPE_H_

#include <string>

template <typename T>
class Shape
{
private:
    std::string name;
public:
    Shape() = default;
    Shape(std::string name) : name(name) {};

    // implement printName() and tag it as 'final'
    // to prevent derived-classes from overriding it
    virtual std::string printName() final {
        return name;
    }

    // implement getArea() as an abstract function
    virtual T getArea() = 0;
};

#endif // SHAPE_H_