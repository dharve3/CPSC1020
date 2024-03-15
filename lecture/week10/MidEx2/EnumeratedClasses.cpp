// Enumerated Classes

#include <iostream>

enum class Day { Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday };

int main() {
    Day today = Day::Monday;
    if (today == Day::Monday) {
        std::cout << "It's Monday!" << std::endl;
    }
    return 0;
}
