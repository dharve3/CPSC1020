// Name: Dylan Harvey
// Date: 3/15/2024
// Class: CPSC 1021
// Lab Name: Lab 7: Challenge 1 - Palindrome Testing
// File Name: Pstring.cpp
// Desc: Sourcefile for derived class Pstring, contains code for isPalindrome

#include "Pstring.h"

bool Pstring::isPalindrome() {
    int length = size();
    // Checks half of the string (in both directions)
    // i.e. checks each character for equality at the index and reverse index
    // Uses this ptr access the string
    for (int i = 0; i < length / 2; ++i) {
        if ((*this)[i] != (*this)[length - i - 1]) {
            return false;
        }
    }
    return true;
}