// Name: Dylan Harvey
// Date: 3/15/2024
// Class: CPSC 1021
// Lab Name: Lab 7: Challenge 4 - Rational Arithmetic
// File Name: Rational.cpp
// Desc: 

#include "Rational.h"

// Constructor
Rational::Rational(int numerator, int denominator) {
    // Store numerator and denominator
    this->numerator = numerator;
    this->denominator = denominator;

    reduce();
}

// Function to reduce the rational number to its simplest form
void Rational::reduce() {
    // Find gcd
    int commonDivisor = gcd(numerator, denominator);

    // Divide numerator and denominator by their gcd
    numerator /= commonDivisor;
    denominator /= commonDivisor;

    // Ensure the denominator is positive
    if (denominator <0) {
        numerator *= -1;
        denominator *= -1;
    }
}

// Function to find the greatest common divisor
int Rational::gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Overloaded insertion operator for outputting the result
std::ostream& operator<<(std::ostream& os, const Rational& rational) {
    os << rational.numerator << "/" << rational.denominator;
    return os;
}