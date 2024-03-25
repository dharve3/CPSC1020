// Static Variables

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
    MyClass obj1, obj2, obj3;
    std::cout << "Number of objects: " << MyClass::count << std::endl; // Output: 3
    return 0;
}
