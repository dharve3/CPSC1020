// Smart Pointers

#include <iostream>
#include <memory>

int main() {
    std::shared_ptr<int> ptr = std::make_shared<int>(10);
    std::cout << "Value: " << *ptr << std::endl; // Output: 10
    return 0;
}
