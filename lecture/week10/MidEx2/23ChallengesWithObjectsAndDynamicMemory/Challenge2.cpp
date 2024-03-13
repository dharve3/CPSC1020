// Dangling Pointers
#include <iostream>

int* createInt() {
    int x = 10;
    return &x; // Returning address of a local variable
}

int main() {
    int* ptr = createInt();
    // Accessing ptr here leads to undefined behavior
    return 0;
}
