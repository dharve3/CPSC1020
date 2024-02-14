#include <iostream>

class Example {
public:
    ~Example() {
        std::cout << "Destructor called" << std::endl;
    }
};

int main() {
    Example obj; // Destructor called at the end of scope
    return 0;
}
