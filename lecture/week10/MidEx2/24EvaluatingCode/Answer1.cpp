// Q: What will happen if we forget to delete ptr at the end of the main function?
// A: A Memory Leak will occur, and memory will be wasted over time.

// Fixed Code:
#include <iostream>

int main() {
    int* ptr = new int;
    *ptr = 10;
    std::cout << "Value: " << *ptr << std::endl;
    delete ptr; // Deallocate memory to prevent memory leak
    return 0;
}