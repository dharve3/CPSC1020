// Memory Allocation Failure
#include <iostream>

int main() {
    int* ptr = new(std::nothrow) int[1000000000000]; // Huge allocation
    delete[] ptr;
    return 0;
}
