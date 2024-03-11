// Name: Dylan Harvey
// Date: 3/15/2024
// Class: CPSC 1021
// Lab Name: Lab 7: Challenge 2 - String Encryption
// File Name: EncryptableString.cpp
// Desc: 

#include "EncryptableString.h"

void EncryptableString::encrypt() {
    // Loop each character in the provided string
    for (char& c : *this) {
        if (isalpha(c)) { // Ensure each character is a letter
            // Logic to check for the last letter (z) and respond accordingly, else increment 1 as usual
            c = (c == 'z' || c == 'Z') ? c - 25 : c + 1;
        }
    }
}