// Name: Dylan Harvey
// Date: 3/15/2024
// Class: CPSC 1021
// Lab Name: Lab 7: Challenge 4 - Rational Arithmetic
// File Name: Rational.h
// Desc: 

#ifndef RATIONAL_H
#define RATIONAL_H

#include <iostream>

class Rational {
private:
    int numerator;
    int denominator;
    // Function to reduce the rational number to its simplest form
    void reduce();
    // Function to find the greatest common divisor
    int gcd(int a, int b);
public:
    Rational(int numerator, int denominator);
    // Overloaded insertion operator for outputting the result
    friend std::ostream& operator<<(std::ostream& os, const Rational& rational);
};

#endif // RATIONAL_H