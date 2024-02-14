#include <iostream>

class Example {
public:
    Example() {
        std::cout << "Constructor called" << std::endl;
    }
};

int main() {
    Example obj; // Constructor called
    return 0;
}
