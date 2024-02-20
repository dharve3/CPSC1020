// This program allows the user to select a month and then
// displays how many days are in that month.  It does this
// by "looking up" information it has stored in arrays.
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    const int NUM_MONTHS = 12; // Changed const to 12 to fit array size
    int choice;
    string name[NUM_MONTHS] =
               { "January",   "February", "March",    "April",
                 "May",       "June",     "July",     "August",
                 "September", "October",  "November", "December" };

    int days[NUM_MONTHS] = {31, 28, 31, 30,
                            31, 30, 31, 31,
                            30, 31, 30, 31};

    cout << "This program will tell you how many days are "
         << "in any month.\n\n";

    // Display the months
    for (int month = 1; month <= NUM_MONTHS; month++) // Changed to increment instead of decrement
        cout << setw(2) << month << "  " << name[month-1] << endl; // Access array with month-1

    cout << "\nEnter the number of the month you want: ";
    cin  >> choice;

    // Use the choice the user entered to get the name of
    // the month and its number of days from the arrays.
    cout << "The month of " << name[choice-1] << " has " // Access array with choice-1
         << days[choice-1]  << " days.\n"; // Access array with choice-1
    return 0;
}