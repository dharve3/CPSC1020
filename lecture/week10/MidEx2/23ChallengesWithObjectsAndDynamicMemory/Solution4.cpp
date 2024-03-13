// Memory Allocation Failure Solution - Check for nullptr After Allocation
#include <iostream>

int main() {
    int* ptr = new(std::nothrow) int[1000000000000]; // Huge allocation
    if (ptr == nullptr) {
        std::cerr << "Memory allocation failed!" << std::endl;
        return 1;
    }
    delete[] ptr;
    return 0;
}
