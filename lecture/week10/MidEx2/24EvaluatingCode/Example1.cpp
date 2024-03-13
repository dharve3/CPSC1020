#include <iostream>

int main() {
    int* ptr = new int;
    *ptr = 10;
    std::cout << "Value: " << *ptr << std::endl;
    // What happens if we forget to delete ptr here?
    return 0;
}

// Q: What will happen if we forget to delete ptr at the end of the main function?
// A: 