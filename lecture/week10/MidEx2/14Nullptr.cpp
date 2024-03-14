// Nullptr

#include <iostream>

int main() {
    int* ptr = nullptr;
    if (ptr == nullptr) {
        std::cout << "Pointer is nullptr" << std::endl; // Output: Pointer is nullptr
    }
    return 0;
}
