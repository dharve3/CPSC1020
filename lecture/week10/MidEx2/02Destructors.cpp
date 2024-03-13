#include <iostream>

class MyClass {
public:
    // Destructor
    ~MyClass() {
        std::cout << "Destructor called\n";
    }
};

int main() {
    MyClass obj; // Destructor called when obj goes out of scope
    return 0;
}
