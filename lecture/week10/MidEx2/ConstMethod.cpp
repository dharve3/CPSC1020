// Const Method

#include <iostream>

class MyClass {
public:
    int value;

    MyClass(int val) : value(val) {}

    void printValue() const {
        // value = 10; // Compilation error: Cannot modify member in const method
        std::cout << "Value: " << value << std::endl;
    }
};

int main() {
    const MyClass obj(5);
    obj.printValue(); // Output: Value: 5
    return 0;
}
