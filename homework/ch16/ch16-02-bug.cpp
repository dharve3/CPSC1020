// This program demonstrates the IntRange class.

#include <iostream>
using namespace std;

class IntRange
{
private:
    int input; // For user input
    int lower; // Lower limit of range
    int upper; // Upper limit of range

public:
    // Exception class
    class OutOfRange {
    public:
        int value;
        OutOfRange(int i) { value = i; }
    };

    // Member functions
    IntRange(int low, int high) { // Constructor
        lower = low;
    }

    int getInput() {
        cin >> input;
        if (input < lower && input > upper)
            throw OutOfRange();

        return input;
   }
};

int main() {
    IntRange range(5, 10);
    int userValue;

    cout << "Enter a value in the range 5 - 10: ";

    try {
        userValue = range.getInput();
        cout << "You entered " << userValue << endl;
    }

    catch (OutOfRange ex) {
        cout << "That value " << ex.value
             << " is out of range.\n";
    }

    cout << "End of the program.\n";
    return 0;
}