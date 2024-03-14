// Dangling Pointers

#include <iostream>

int main() {
    int* ptr = new int;
    delete ptr;
    std::cout << "Value: " << *ptr << std::endl; // Undefined behavior (dangling pointer)
    return 0;
}
