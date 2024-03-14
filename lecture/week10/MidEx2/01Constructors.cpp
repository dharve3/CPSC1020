// Constructors

#include <iostream>

class MyClass {
public:
    // Constructor
    MyClass() {
        std::cout << "Constructor called\n";
    }
};

int main() {
    MyClass obj; // Constructor called
    return 0;
}
