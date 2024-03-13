// Double Deletion Solution
#include <iostream>

int main() {
    int* ptr = new int(5);
    delete ptr;
    ptr = nullptr; // Nullify pointer after deletion
    delete ptr; // Safe to delete nullptr
    return 0;
}
