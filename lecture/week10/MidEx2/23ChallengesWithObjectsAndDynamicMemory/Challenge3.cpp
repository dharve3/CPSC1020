// Double Deletion
#include <iostream>

int main() {
    int* ptr = new int(5);
    delete ptr;
    delete ptr; // Attempting to delete again
    return 0;
}
