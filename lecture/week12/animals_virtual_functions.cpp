#include <iostream>
#include <vector>
using namespace std;

class Animal
{
  int age;
  int weight;
public:
  virtual void sound() {        // declare sound() as a virtual function
    cout << "Animal!" << endl;
  }
};

class Dog : public Animal
{
public:
  virtual void sound() {
    cout << "Woof" << endl;
  }
};

class Cat : public Animal
{
public:
  virtual void sound() {
    cout << "Meow" << endl;
  }
};


void makeSound(Animal &animal)
{
  animal.sound();
}
    
  

int main()
{
  // make instances of derived classes
  Dog dog;
  Cat cat;
  
  // access derived class through base class pointer
  Animal *animal1 = &dog;
  animal1->sound(); // now prints "Woof", not "Animal!"
  
  Animal *animal2 = &cat;
  animal2->sound(); // now prints "Meow", not "Animal!"


  // APPLICATION 1: function that uses base class interface
  makeSound(dog);
  makeSound(cat);
  
  // APPLICATION 2: vector of base class pointers
  vector<Animal *>vect {&dog, &cat};

  for (Animal * a : vect)
    {
      a->sound();
    }

    
  return 0;
}
