// Memory Leaks

#include <iostream>

int main() {
    // OK
    int * p = new int;
    delete p; 

    // Memory leak
    int * q = new int;
    // no delete
}
