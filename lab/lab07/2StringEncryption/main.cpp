// Name: Dylan Harvey
// Date: 3/15/2024
// Class: CPSC 1021
// Lab Name: Lab 7: Challenge 2 - String Encryption
// File Name: main.cpp
// Desc: Encrypts a provided string by shifting it +1 with caesar cipher (shift cipher)

#include <iostream>
#include "EncryptableString.h"

int main() {
    std::cout << "This is an Encryption program. Enter a string to encrypt: ";
    std::string input;
    std::cin >> input;

    EncryptableString encryptedString(input);
    encryptedString.encrypt();

    std::cout << "Here is the encrypted string: " << encryptedString << std::endl;

    return 0;
}