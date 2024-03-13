#include <iostream>

class MyClass {
public:
    int value;

    MyClass(int val) : value(val) {}

    void printValue() const {
        // value = 10; // Uncommenting this line would result in a compilation error
        std::cout << "Value: " << value << std::endl;
    }
};

int main() {
    MyClass obj(5);
    obj.printValue();
    // What happens if we try to modify the value of obj in the printValue function?
    return 0;
}

// Q: What happens if we try to modify the value of obj in the printValue function? Why does the compiler raise an error when attempting to modify value inside a const function?
// A: 