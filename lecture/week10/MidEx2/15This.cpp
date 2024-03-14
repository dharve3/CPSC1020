// This

#include <iostream>

class MyClass {
public:
    void printAddress() {
        std::cout << "Address of object: " << this << std::endl;
        // std::cout << "Value of object: " << *this << std::endl; // Object has no value/not supported by <<
        // See lab07 for other good usages of *this
    }
};

int main() {
    MyClass obj;
    obj.printAddress();
    return 0;
}

// You will also see this a lot in operator overloading like, this->