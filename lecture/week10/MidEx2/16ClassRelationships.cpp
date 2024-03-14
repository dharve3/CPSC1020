// Class Relationships

#include <iostream>

class Engine {};

// Aggregation
class Car {
private:
    Engine engine;
};

// Composition
class House {
private:
    Room* room;
public:
    House() {
        room = new Room();
    }
    ~House() {
        delete room;
    }
};

// Has-a relationship
class Car {
private:
    Engine engine;
};

// Is-a relationship (Inheritance)
class Animal {
public:
    virtual void speak() = 0;
};

class Dog : public Animal {
public:
    void speak() override {
        std::cout << "Woof" << std::endl;
    }
};

int main() {
    Car car;
    House house;
    Animal* animal = new Dog();
    animal->speak(); // Output: Woof
    delete animal;
    return 0;
}
