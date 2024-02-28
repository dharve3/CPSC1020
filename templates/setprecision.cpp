// setprecision.cpp
// Output formatting

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int num1 = 2;
    double num2 = 123.45678;
    double num3 = 5;
    double num4 = 324;

    // Using setprecision(2)
    cout << "Using setprecision(2):\n";
    cout << setprecision(2) << num1 << endl << num2 << endl << num3 << endl << num4 << endl << endl;

    // Using setprecision(2) and fixed
    cout << "Using setprecision(2) and fixed:\n";
    cout << fixed << setprecision(2) << num1 << endl << num2 << endl << num3 << endl << num4 << endl << endl;

    // Using setprecision(2), fixed, and showpoint
    cout << "Using setprecision(2), fixed, and showpoint:\n";
    cout << fixed << showpoint << setprecision(2) << num1 << endl << num2 << endl << num3 << endl << num4 << endl << endl;

    return 0;
}
