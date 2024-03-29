// This program demonstrates a function with a parameter.
#include <iostream>
using namespace std;

// Function prototype
void displayValue(int);   // Can be written as void displayValue(int);

int main()
{
    cout << "I am passing several values to displayValue.\n";
    displayValue(5);          // Call displayValue with argument 5
    displayValue(10);         // Call displayValue with argument 10
    displayValue(2);          // Call displayValue with argument 2
    displayValue(16);         // Call displayValue with argument 16
    cout << "Now I am back in main.\n";
    return 0;
}

/********************************************
 *               displayValue               *
 *  This function uses an integer parameter *
 *  whose value is displayed.               *
 ********************************************/
// Fixed function header, added num parameter
void displayValue(int num)
{
    cout << "The value is " << num << endl;
}