#include <iostream>

class Example {
public:
    Example() {
        std::cout << "Default constructor called" << std::endl;
    }
};

int main() {
    Example obj; // Default constructor called
    return 0;
}

// Default constructor is called at object instantiation