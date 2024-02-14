#include <iostream>

class Example {
private:
    int privateVar;

public:
    void setPrivateVar(int value) {
        privateVar = value;
    }

    int getPrivateVar() {
        return privateVar;
    }
};

int main( ) {
    Example obj;
    obj.setPrivateVar(10);
    std::cout << "Private variable: " << obj.getPrivateVar() << std::endl;
    return 0;
}
