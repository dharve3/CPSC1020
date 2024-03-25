// Const Parameter

#include <iostream>

void printValue(const int& value) {
    // value = 10; // Compilation error: Attempting to modify const parameter
    std::cout << "Value: " << value << std::endl;
}

int main() {
    int x = 5;
    printValue(x); // Output: Value: 5
    return 0;
}
