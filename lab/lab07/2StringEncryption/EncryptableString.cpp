// Name: Dylan Harvey
// Date: 3/15/2024
// Class: CPSC 1021
// Lab Name: Lab 7: Challenge 2 - String Encryption
// File Name: EncryptableString.cpp
// Desc: 

#include "EncryptableString.h"

void EncryptableString::encrypt() {
    int length = size();

    for (int i = 0; i < length; ++i) {
        *this[i] += 1;
    }
}