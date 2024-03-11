// Name: Dylan Harvey
// Date: 3/15/2024
// Class: CPSC 1021
// Lab Name: Lab 7: Challenge 1 - Palindrome Testing
// File Name: Pstring.cpp
// Desc: 

#include "Pstring.h"

bool Pstring::isPalindrome() {
    int length = size();
    // Checks half of the string (in both directions)
    for (int i = 0; i < length / 2; ++i) {
        if ((*this)[i] != (*this)[length - i - 1]) {
            return false;
        }
    }
    return true;
}