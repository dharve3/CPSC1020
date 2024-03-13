// Q: What happens if we try to modify the value of obj in the printValue function? Why does the compiler raise an error when attempting to modify value inside a const function?
// A: We cannot modify the object in a const function, as declaring a function as const ensures that it is unable to do so.

// To fix this, make the function not const.
// Changed Code:
#include <iostream>

class MyClass {
public:
    int value;

    MyClass(int val) : value(val) {}

    void printValue() {
        value = 10; // Set value to 10
        std::cout << "Value: " << value << std::endl;
    }
};

int main() {
    MyClass obj(5);
    obj.printValue();
    return 0;
}
