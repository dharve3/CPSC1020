#include <iostream>

class Example {
public:
    Example() {
        std::cout << "Default constructor called" << std::endl;
    }

    Example(int x) {
        std::cout << "Parameterized constructor called with value: " << x << std::endl;
    }
};

int main() {
    Example obj1; // Default constructor called
    Example obj2(10); // Parameterized constructor called with value: 10
    return 0;
}

// Multiple constructors with diferent parameters to handle different situations