// My Name: Dylan Harvey
// My Class: CPSC 1021
// Date: 1/22/2024
// Desc: 
// Time: 

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    // DEFINE THE NAMED CONSTANT PI HERE AND SET ITS VALUE TO 3.14159
    const float PI = 3.14159;

    // DECLARE ALL NEEDED VARIABLES HERE. GIVE EACH ONE A DESCRIPTIVE
    // NAME AND AN APPROPRIATE DATA TYPE.
    int choice;
    float length, radius, a, b, area;

    // WRITE STATEMENTS HERE TO DISPLAY THE 4 MENU CHOICES.
    cout << "Program to calculate areas of objects" << endl
         << "\t 1 -- square" << endl
         << "\t 2 -- circle" << endl
         << "\t 3 -- right triangle" << endl
         << "\t 4 -- quit" << endl;

    // WRITE A STATEMENT HERE TO INPUT THE USER'S MENU CHOICE.
    cin >> choice;

    // USE AN IF/ELSE IF STATEMENT TO OBTAIN ANY NEEDED INPUT INFORMATION
    // AND COMPUTE AND DISPLAY THE AREA FOR EACH VALID MENU CHOICE.
    // ASSUME THE USER ENTERS VALID METRICS, E.G. DOESN’T ENTER
    // A STRING OR NEGATIVE NUMBER.
    // IF AN INVALID MENU CHOICE WAS ENTERED, AN ERROR MESSAGE SHOULD
    // BE DISPLAYED.
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