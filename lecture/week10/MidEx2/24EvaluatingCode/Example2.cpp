#include <iostream>

class Point {
public:
    int x, y;
    Point(int x = 0, int y = 0) : x(x), y(y) {}

    // Overload the + operator to add two Point objects
    Point operator+(const Point& p) {
        Point sum;
        sum.x = x + p.x;
        sum.y = y + p.y;
        return sum;
    }
};

int main() {
    Point p1(5, 3);
    Point p2(2, 7);
    Point p3 = p1 + p2;
    std::cout << "Sum of points: (" << p3.x << ", " << p3.y << ")" << std::endl;
    // What output do you expect from this code?
    return 0;
}

// Q: What output do you expect from this code? How is the + operator overloaded in the Point class, and how does it work?
// A: 