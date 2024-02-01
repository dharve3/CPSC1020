// Fraction class test program

#include <iostream>
#include "Fraction.h"

using namespace std;

int main() {
    Fraction f1;
    f1.setNumDen(1, 2);

    cout << f1.value();

    return 0;
}