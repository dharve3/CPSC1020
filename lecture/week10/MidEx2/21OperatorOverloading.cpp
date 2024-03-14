// Operator Overloading

#include <iostream>

class Complex {
private:
    double real;
    double imag;
public:
    Complex(double r, double i) : real(r), imag(i) {}
    Complex operator+(const Complex& other) {
        return Complex(real + other.real, imag + other.imag);
    }
    friend std::ostream& operator<<(std::ostream& out, const Complex& c) {
        out << c.real << " + " << c.imag << "i";
        return out;
    }
};

int main() {
    Complex c1(2, 3), c2(4, 5);
    Complex c3 = c1 + c2;
    std::cout << "Result: " << c3 << std::endl; // Output: Result: 6 + 8i
    return 0;
}
// Lots of good operator overloading examples in ch11 homeworks