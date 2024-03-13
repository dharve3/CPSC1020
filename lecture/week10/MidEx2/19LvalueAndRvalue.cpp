#include <iostream>

int main() {
    int x = 5; // Lvalue
    int& y = x; // Lvalue reference
    int&& z = 10; // Rvalue reference

    std::cout << "x: " << x << std::endl; // Output: 5
    std::cout << "y: " << y << std::endl; // Output: 5
    std::cout << "z: " << z << std::endl; // Output: 10

    return 0;
}
