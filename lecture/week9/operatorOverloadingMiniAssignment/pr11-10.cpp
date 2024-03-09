// This program demonstrates the Length class's overloaded 
// +, -, ==, and < operators. 
#include <iostream>
#include "Length.h"
using namespace std;

int main()
{
    Length first(0), second(0), third(0);
    int f, i;

    // New input using >>
    cout << "Enter a distance in feet and inches: ";
    cin  >> f >> i;
    first.setLength(f, i);

    cout << "Enter another distance in feet and inches: ";
    cin  >> f >> i;
    second.setLength(f, i);

    // Test the + and - operators 
    third = first + second;
    cout << "first + second = ";
    cout << third.getFeet() << " feet, ";
    cout << third.getInches() << " inches.\n";
    
    third = first - second;
    cout << "first - second = ";
    cout << third.getFeet() << " feet, ";
    cout << third.getInches() << " inches.\n";

    // Test the relational operators
    cout << "first == second = " << (first == second ? "true" : "false") << endl;
    cout << "first < second = " << (first < second ? "true" : "false") << endl;

    // Using overloaded >> and <<
    cin >> first;
    cout << "after >> here is first: ";
    cout << first << endl;

    cin | second;
    cout << "after | here is second: ";
    cout << second << endl;
        
    return 0;
}
