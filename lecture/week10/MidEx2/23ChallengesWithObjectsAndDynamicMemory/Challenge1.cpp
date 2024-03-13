// Memory leak
#include <iostream>

int main() {
    int* ptr = new int(5);
    // Do some operations without deleting ptr
    return 0;
}
