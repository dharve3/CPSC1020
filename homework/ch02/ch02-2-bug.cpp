// This program can't find its variable.
#include <iostream>
using namespace std;

int main() {
    int value = 100;
    // moved variable declaration and assignment above its reference
    cout << value;   

    return 0;
}