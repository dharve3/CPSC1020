// = Operator

#include <iostream>

class MyClass {
public:
    int value;
    MyClass(int val) : value(val) {}
    MyClass& operator=(const MyClass& obj) {
        value = obj.value;
        return *this;
    }
};

int main() {
    MyClass obj1(5), obj2(10);
    obj2 = obj1; // = operator called
    std::cout << "Value of obj2: " << obj2.value << std::endl; // Output: 5
    return 0;
}
