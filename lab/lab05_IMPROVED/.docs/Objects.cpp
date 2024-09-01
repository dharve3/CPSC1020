// Objects Example

#include <iostream>
#include <string>

class Car {
private:
    std::string model;
    int year;

public:
    Car(std::string model, int year) : model(model), year(year) {}

    void showDetails() {
        std::cout << "Model: " << model << ", Year: " << year << "\n";
    }
};

int main() {
    Car myCar("Toyota", 2020);
    myCar.showDetails();

    return 0;
}
