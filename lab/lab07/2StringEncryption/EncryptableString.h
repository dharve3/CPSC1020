// Name: Dylan Harvey
// Date: 3/15/2024
// Class: CPSC 1021
// Lab Name: Lab 7: Challenge 2 - String Encryption
// File Name: EncryptableString.h
// Desc: Headerfile for class EncryptableString

#ifndef ENCRYPTABLESTRING_H
#define ENCRYPTABLESTRING_H

#include <string>

class EncryptableString : public std::string {
public:
    EncryptableString(const std::string& str) : std::string(str) {}
    void encrypt();
};

#endif // ENCRYPTABLESTRING_H