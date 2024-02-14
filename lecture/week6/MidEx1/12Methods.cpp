#include <iostream>

class Example {
public:
    void method() {
        std::cout << "Inside method" << std::endl;
    }
};

int main() {
    Example obj;
    obj.method();
    return 0;
}
