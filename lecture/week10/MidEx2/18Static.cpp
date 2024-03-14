// Static

#include <iostream>

class MyClass {
public:
    static int count;
    MyClass() {
        count++;
    }
};

int MyClass::count = 0;

int main() {
    MyClass obj1, obj2;
    std::cout << "Count: " << MyClass::count << std::endl; // Output: 2
    return 0;
}
