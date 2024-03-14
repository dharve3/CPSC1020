#include <iostream>

class MyClass {
public:
    int value;
    MyClass(int val) : value(val) {}
    // Copy constructor:
    MyClass(const MyClass& obj) {
        value = obj.value;
    }
};

int main() {
    MyClass obj1(5);
    MyClass obj2 = obj1; // Copy constructor called
    std::cout << "Value of obj2: " << obj2.value << std::endl; // Output: 5
    return 0;
}


// Example from textbook:
class CpClass {
    int *p; // Private ptr p
public:
    CpClass(const CpClass &obj) // Copy Constructor
    { p = new int; *p = *obj.p; }
    CpClass(int v=0) // Normal Constructor
    { p = new int; *p = v; }
    ~CpClass(){delete p;} // Destructor
};
