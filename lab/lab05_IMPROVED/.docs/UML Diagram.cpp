// UML Class Diagram Example

// +----------------+
// |    Animal      |
// +----------------+
// | -name: string  |
// | -age: int      |
// +----------------+
// | +Animal(name: string, age: int) |
// | +speak(): void  |
// | +getAge(): int  |
// | +setAge(age: int): void |
// +----------------+

// Implementation:
#include <iostream>
#include <string>

class Animal {
private:
    std::string name;
    int age;

public:
    // Constructor
    Animal(std::string name, int age) : name(name), age(age) {}

    // Method to make the animal speak
    void speak() {
        std::cout << "My name is " << name << " and I am " << age << " years old.\n";
    }

    // Getter for age
    int getAge() {
        return age;
    }

    // Setter for age
    void setAge(int age) {
        this->age = age;
    }
};

int main() {
    // Creating an object of the Animal class
    Animal dog("Buddy", 5);
    dog.speak();

    // Modify age using the setter
    dog.setAge(6);
    
    // Print the updated age
    std::cout << "Now, I am " << dog.getAge() << " years old.\n";

    return 0;
}
