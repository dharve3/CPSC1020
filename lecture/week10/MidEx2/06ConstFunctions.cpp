#include <iostream>

class MyClass {
public:
    void func() const {
        std::cout << "Const function\n";
    }
};

int main() {
    const MyClass obj;
    obj.func(); // Const function, cannot modify any state of the object
    return 0;
}
