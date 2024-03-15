// Pass by Reference

#include <iostream>

void increment(int& num) {
    num++;
}

int main() {
    int x = 5;
    increment(x);
    std::cout << "x after increment: " << x << std::endl; // Output: 6
    return 0;
}
