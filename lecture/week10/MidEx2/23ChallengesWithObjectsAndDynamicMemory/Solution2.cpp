// Dangling Pointers Solution
#include <iostream>

int* createInt() {
    int* x = new int(10); // Allocate memory on heap
    return x;
}

int main() {
    int* ptr = createInt();
    // Access ptr safely here
    delete ptr; // Deallocate memory when done
    return 0;
}
