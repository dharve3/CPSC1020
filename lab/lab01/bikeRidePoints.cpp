// My Name: Dylan Harvey
// My Class: CPSC 1021
// Date: 1/22/2024
// Desc: Determines the points the user has earned based on input.
// Time: ~15 Minutes

#include <iostream>

using namespace std;

int main() {
    int number;
    
    // Loop to validate user input
    do {
        cout << "Enter the number of bike rides to campus this semester: ";
        cin >> number;
        if (number < 0)
            cout << "Invalid input, please try again." << endl;
    } while (number < 0);

    // More chained ifs yay (could use a loop but this seemed simplest for this prog)
    // Logic to determine output based on input
    if (number == 0)
        cout << "You earned 0 points this semester";
    else if (number == 1)
        cout << "You earned 3 points this semester";
    else if (number == 2)
        cout << "You earned 10 points this semester";
    else if (number == 3)
        cout << "You earned 15 points this semester";
    else if (number == 4)
        cout << "You earned 30 points this semester";
    else if (number >= 5)
        cout << "You earned 50 points this semester";
    else
        cout << "How did you get here?";

    return 0;
}