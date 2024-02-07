// My Name: Dylan Harvey
// My Class: CPSC 1021
// Date: 2/6/2024
// Desc: file containing main function that operates as menu for the user and displays output
// Time: ~1 Hour

#include <iostream>
#include <iomanip>

using namespace std;

#include "Circle.h"
#include "Rectangle.h"
#include "Square.h"
#include "Trapezoid.h"

int main() {
	int menuChoice;
	double r, s, l, w, b1, b2, h;
    
	// user menu
	cout << "\t\t1 -- circle\n"; 
    cout << "\t\t2 -- square\n";
    cout << "\t\t3 -- rectangle\n";
    cout << "\t\t4 -- trapezoid\n";
    cout << "\t\t5 -- quit\n";
    cin >> menuChoice;

	// validates user input
    while (menuChoice < 1 || menuChoice > 5) {
		cout << "Please enter a valid menu choice: ";
		cin >> menuChoice;
	}
	if (menuChoice == 5) {
		exit(0);
	} else if (menuChoice == 1) {  // choice for circle
		Circle circle1;
		cout << "Radius: ";
		cin >> r;
		circle1.setRadius(r);
		cout << "Area: " << fixed << setprecision(1) << circle1.calcArea() << endl;
	} else if (menuChoice == 2) {  // choice for square
		Square square1;
		cout << "Side: ";
		cin >> s;
		square1.setSide(s);
		cout << "Area: " << fixed << setprecision(1) << square1.calcArea() << endl;
	} else if (menuChoice == 3) {  // choice for rectangle
		Rectangle rectangle1;
		cout << "Length: ";
		cin >> l;
		cout << "Width: ";
		cin >> w;
		rectangle1.setLength(l);
		rectangle1.setWidth(w);
		cout << "Area: " << fixed << setprecision(1) << rectangle1.calcArea() << endl;
	} else if (menuChoice == 4) {  // choice for trapezoid
		Trapezoid trapezoid1;
		cout << "Base1: ";
		cin >> b1;
		cout << "Base2: ";
		cin >> b2;
		cout << "Height: ";
		cin >> h;
		trapezoid1.setBase1(b1);
		trapezoid1.setBase2(b2);
		trapezoid1.setHeight(h);
		cout << "Area: " << fixed << setprecision(1) << trapezoid1.calcArea() << endl;
	}
	else {  // theoretically unreachable condition
		cout << "How did you get here?" << endl;
		exit(1);
	}

	return 0;
}