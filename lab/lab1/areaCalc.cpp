// My Name: Dylan Harvey
// My Class: CPSC 1021
// Date: 1/22/2024
// Desc: Calculates the area of a chosen shape from user input.
// Time: ~30 Minutes

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    const float PI = 3.14159;

    int choice;
    float length, radius, a, b, area;

    // Displays menu
    cout << "Program to calculate areas of objects" << endl
         << "\t 1 -- square" << endl
         << "\t 2 -- circle" << endl
         << "\t 3 -- right triangle" << endl
         << "\t 4 -- quit" << endl;

    // Get user input
    cin >> choice;

    // Logic for each menu item
    if (choice == 1) {
        cout << "Length of the square: ";
        cin >> length;
        area = pow(length, 2);
        cout << "Area = " << setprecision(2) << fixed << area << endl;
    }
    else if (choice == 2) {
        cout << "Radius of the circle: ";
        cin >> radius;
        area = PI * pow(radius, 2);
        cout << "Area = " << setprecision(2) << fixed << area << endl;
    }
    else if (choice == 3) {
        cout << "Length of legs (a and b, one statement seperated by space): ";
        cin >> a >> b;
        area = (a * b) / 2;
        cout << "Area = " << setprecision(2) << fixed << area << endl;
    }
    else if (choice == 4) {
        exit(0);
    }
    else {
        cout << "You entered an invalid choice. Good bye!";
        exit(0);
    }
        
    return 0;
}