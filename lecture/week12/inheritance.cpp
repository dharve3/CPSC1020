#include <iostream>
using namespace std;

class Parent
{
private:
  int a {0};
public:
  Parent() = default;
  Parent(int a) {this->a = a;}
  int getA() { return a;}
};

class Child : public Parent 
{
private:
  int c {0};
public:
  Child() = default;
  Child(int val) : Parent(val) {}
  int getC()  { return c;}
  //int getAfromC() { return a;}
};


int main()
{
  Parent p {1};
  cout << "The value of a in parent is: " << p.getA() << endl;

  Child c {2};
  cout << "The value of c in child is: " << c.getC() << endl;
  cout << "The value of a in child is: " << c.getA() << endl;
  //cout << "The value of a in child is: " << c.getAfromC() << endl;
  

  return 0;
}


