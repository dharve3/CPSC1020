// Memory Leak Solution
#include <iostream>

int main() {
    int* ptr = new int(5);
    // Do some operations
    delete ptr; // Deallocate memory
    return 0;
}
