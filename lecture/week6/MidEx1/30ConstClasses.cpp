#include <iostream>

class Example {
private:
    const int var = 10; // Const member variable

public:
    void printVar() const {
        // var = 20; // Error: Cannot modify const member variable
        std::cout << "Variable: " << var << std::endl;
    }
};
