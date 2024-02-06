// My Name: Dylan Harvey
// My Class: CPSC 1021
// Date: 2/6/2024
// Desc: 
// Time: 

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
    
	cout << "\t\t1 -- circle\n";    //user menu 
    cout << "\t\t2 -- square\n";
    cout << "\t\t3 -- rectangle\n";
    cout << "\t\t4 -- trapezoid\n";
    cout << "\t\t5 -- quit\n";
    cin >> menuChoice;

    while (menuChoice < 1 || menuChoice > 5) {   //validates user input
		cout << "Please enter a valid menu choice: ";
		cin >> menuChoice;
	}
	if (menuChoice == 5) {
		exit(1);
	} else if (menuChoice == 1) {
		Circle circle1;
		cout << "Radius: ";
		cin >> r;
		circle1.setRadius(r);
		cout << "Area: " << fixed << setprecision(1) << circle1.calcArea() << endl; //prints circle area
	} else if (menuChoice == 2) {
		Square square1;
		cout << "Side: ";
		cin >> s;
		square1.setSide(s);
		cout << "Area: " << fixed << setprecision(1) << square1.calcArea() << endl;
	} else if (menuChoice == 3) {
		Rectangle rectangle1;
		cout << "Length: ";
		cin >> l;
		cout << "Width: ";
		cin >> w;
		rectangle1.setLength(l);
		rectangle1.setWidth(w);
		cout << "Area: " << fixed << setprecision(1) << rectangle1.calcArea() << endl;
	} else {
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

	return 0;
}