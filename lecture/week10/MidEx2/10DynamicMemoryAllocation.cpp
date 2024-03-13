#include <iostream>

int main() {
    int* ptr = new int; // Allocation
    *ptr = 10;
    std::cout << "Value: " << *ptr << std::endl; // Output: 10
    delete ptr; // Deallocation
    return 0;
}
