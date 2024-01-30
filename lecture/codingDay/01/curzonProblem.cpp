// My Name: your name goes here
// My Class: CPSC 1021 (for labs) or CPSC 1020 (for lecture class)
// Date: Date you wrote the program
// Desc: brief description of what the program does
// Time: approximate amount of time you spent on this program

#include <iostream>
#include <cmath>

using namespace std;

bool isCurzon(int num) {
    long divisor, dividend;
	 // long remainder;
    // double fResult;

    dividend = (pow(2, num) + 1);
    divisor = ((2 * num ) + 1);
    // fResult = static_cast<float>(dividend) / static_cast<float>(divisor);
    // remainder = dividend % divisor;

    // Some helpful debug/info
    // cout << "Dividend: " << dividend << " Divisor: " << divisor << " Result: " << fResult << endl;
    // cout << dividend << "/" << divisor << "=" << fResult << " Remainder: " << remainder << endl;

    // If evaluates to 0, return 1 (true), if evaluates to anything else, return 0 (false)
    return (!(dividend % divisor));
}

int main(int argc, char* argv[]) {
	int number;
	number = stoi(argv[1]);

	if (isCurzon(number))
		cout << number << " is a Curzon number";
	else
		cout << number << " is not a Curzon number";

	return 0;
}
