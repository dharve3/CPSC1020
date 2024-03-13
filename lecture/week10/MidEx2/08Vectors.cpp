#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};
    vec.push_back(6);
    std::cout << "Vector size: " << vec.size() << std::endl; // Output: 6
    return 0;
}
// Be familar with more concepts of vectors like its other functions, shuffle, sort etc.