// My Name: Dylan Harvey
// My Class: CPSC 1021
// Date: 1/22/2024
// Desc: Calculates compound interest from user input
// Time: ~45 minutes

#include "compoundCalc.h"

    int main() {
    float principal, rate, years, savings;

    // Get values from user
    cout << "Enter your principal (current value): ";
    cin >> principal;
    cout << "Enter the interest rate as a decimal (e.g. 0.025): ";
    cin >> rate;
    cout << "Enter the number of years: ";
    cin >> years;

    savings = compoundCalc(principal, rate, years);

    cout << "Your retirement savings will be $" << setprecision(2) << fixed << savings << endl;

    return 0;
}