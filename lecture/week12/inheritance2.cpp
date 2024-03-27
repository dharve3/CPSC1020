#include <iostream>
using namespace std;

class Parent
{
private:
  int a {11};
public:
  Parent() = default;
  Parent(int a) { this->a = a; }
  int getA() { return a;}
};

class Child : public Parent 
{
private:
  int c {99};
public:
  Child() = default;
  Child(int c) {this->c = c;}
  int getC()  { return c;}
};


int main()
{
  Parent p;  
  Child c;

  cout << "Size of p in bytes: " << sizeof(p) << endl;
  cout << "Size of c in bytes: " << sizeof(c) << endl;

  cout << "The value of a in child is: " << c.getA() << endl;
  cout << "The value of c in child is: " << c.getC() << endl;

  

  return 0;
}


