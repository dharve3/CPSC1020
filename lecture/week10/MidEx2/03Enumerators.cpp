#include <iostream>

enum Color {
    RED,
    GREEN,
    BLUE
};

int main() {
    Color c = RED;
    std::cout << "Color: " << c << std::endl; // Output: 0 (RED)
    return 0;
}
