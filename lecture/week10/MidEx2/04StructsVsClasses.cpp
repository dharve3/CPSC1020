// Structs vs Classes

#include <iostream>

// Struct
struct MyStruct {
    int x;
};

// Class
class MyClass {
public:
    int y;
};

int main() {
    MyStruct s;
    s.x = 5;

    MyClass c;
    c.y = 10;

    std::cout << "MyStruct: " << s.x << std::endl; // Output: 5
    std::cout << "MyClass: " << c.y << std::endl;  // Output: 10
    return 0;
}
