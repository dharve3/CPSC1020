// Lvalue and Rvalue

// Rvalue is a temporary value that is unnamed
// See textbook for complex details
#include <iostream>

int main() {
    int x = 5; // Lvalue
    int& y = x; // Lvalue reference
    int&& z = 10; // Rvalue reference
    double a, b; a = pow(3.0, 2); // pow(3.0, 2) is an Rvalue
    a = b;
    // a is Lvalue, b is Rvalue (left and right)
    // In this case of assignment, address of a, contents of b

    std::cout << "x: " << x << std::endl; // Output: 5
    std::cout << "y: " << y << std::endl; // Output: 5
    std::cout << "z: " << z << std::endl; // Output: 10

    return 0;
}
