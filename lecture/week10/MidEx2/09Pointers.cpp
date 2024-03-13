#include <iostream>

int main() {
    int x = 5;
    int* ptr = &x;
    std::cout << "Value of x: " << *ptr << std::endl; // Output: 5
    return 0;
}
