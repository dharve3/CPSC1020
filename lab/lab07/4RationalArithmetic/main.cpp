// Name: Dylan Harvey
// Date: 3/15/2024
// Class: CPSC 1021
// Lab Name: Lab 7: Challenge 4 - Rational Arithmetic
// File Name: main.cpp
// Desc: Gets input as a fraction (rational number) and converts it to its reduced form.

#include <iostream>
#include "Rational.h"

int main() {
	int numerator, denominator;
	
	std::cout << "Enter the numerator and denominator separated by a space: ";
	std::cin >> numerator >> denominator;

	Rational rationalNumber(numerator, denominator);
	std::cout << "Reduced form: " << rationalNumber << std::endl;

	return 0;
}