// Const Variables

#include <iostream>

int main() {
    const int x = 5;
    // x = 10; // Error: Cannot modify const variable
    std::cout << "x: " << x << std::endl; // Output: 5
    return 0;
}
