#include <iostream>

namespace Example {
    int var = 5;
}

int main() {
    std::cout << "Variable from namespace: " << Example::var << std::endl;
    return 0;
}
