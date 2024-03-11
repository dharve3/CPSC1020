// Name: Dylan Harvey
// Date: 3/15/2024
// Class: CPSC 1021
// Lab Name: Lab 7: Challenge 1 - Palindrome Testing
// File Name: Pstring.h
// Desc: Headerfile for derived class Pstring

#ifndef PSTRING_H
#define PSTRING_H

#include <string>

class Pstring : public std::string {
public:
    Pstring(const std::string& str) : std::string(str) {}
    bool isPalindrome();
};

#endif // PSTRING_H