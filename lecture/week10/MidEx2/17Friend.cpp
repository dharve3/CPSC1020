// Friend

#include <iostream>

class MyClass {
private:
    int x;
public:
    friend void friendFunc(MyClass&);
    MyClass(int val) : x(val) {}
};

void friendFunc(MyClass& obj) {
    std::cout << "Value of x: " << obj.x << std::endl;
}

int main() {
    MyClass obj(5);
    friendFunc(obj); // Output: Value of x: 5
    return 0;
}
