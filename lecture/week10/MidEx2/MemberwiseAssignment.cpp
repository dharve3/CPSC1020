// Memberwise Assignment

#include <iostream>

class Point {
public:
    int x, y;
};

int main() {
    Point p1, p2;
    p1.x = 10;
    p1.y = 20;
    p2 = p1; // Memberwise assignment
    std::cout << "p2.x: " << p2.x << ", p2.y: " << p2.y << std::endl;
    return 0;
}
