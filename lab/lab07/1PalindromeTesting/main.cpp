// Name: Dylan Harvey
// Date: 3/15/2024
// Class: CPSC 1021
// Lab Name: Lab 7: Challenge 1 - Palindrome Testing
// File Name: main.cpp
// Desc: Palindrome Tester program, checks if a string input from the user is a palindrome (same forwards and backwards)

#include <iostream>
#include "Pstring.h"

int main() {
    std::cout << "This is a palindrome-testing program. Enter a string to test: ";
    std::string input;
    std::cin >> input;

    Pstring pstring(input);

    if (pstring.isPalindrome()) {
        std::cout << input << " is a palindrome" << std::endl;
    } else {
        std::cout << input << " is not a palindrome" << std::endl;
    }

    return 0;
}