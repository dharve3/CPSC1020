// Pointer Arithmetic

#include <iostream>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int* ptr = arr;

    std::cout << "Value at ptr: " << *ptr << std::endl; // Output: 1
    ptr++; // Move to next element
    std::cout << "Value at ptr: " << *ptr << std::endl; // Output: 2

    return 0;
}
