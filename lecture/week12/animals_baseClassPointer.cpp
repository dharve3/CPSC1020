#include <iostream>
using namespace std;


class Animal
{
  int age;
  int weight;
public:
  void sound() {
    cout << "Animal!" << endl;
  }
};

class Dog : public Animal
{
public:
  void sound() {
    cout << "Woof" << endl;
  }
};

class Cat : public Animal
{
public:
  void sound() {
    cout << "Meow" << endl;
  }
};


int main()
{
  // each specialized function can be called from an object
  Dog dog;
  Cat cat;

  dog.sound();
  cat.sound();

  // access derived class through base class pointer
  Animal *animal1 = &dog;
  animal1->sound(); // prints "Animal!", not "Woof"
  
  Animal *animal2 = &cat;
  animal2->sound(); // prints "Animal!", not "Meow"
  
  // we need to type cast the base class pointer to the derived class
  // in order to access the more specific member function sound()
  static_cast <Dog *>(animal1)->sound();
  static_cast <Cat *>(animal2)->sound();

  
  return 0;
}


