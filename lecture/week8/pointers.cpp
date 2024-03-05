#include <iostream> 
using namespace std;

class Square
{
private:
  int side {1};
public:
  Square() = default;
  Square(int s) : side{s} {}
  int getSide()
    { return side; }
  int calcArea()
  {return side * side;}
};


int main() 
{
  int x {25};   // int variable
  int *pX;      // prt points to an int
  
  pX = &x;      // store the address of x in pX
  cout << "The value in x is " << x;
  cout << " stored at address " << pX << endl;

  // using the indirection operator '*' to access
  // the value in the variable pX is pointing to
  cout << "The value in x is " << *pX << endl;

  // comparing pointers
  //int *pX2 {&x}; // this is the same as:
  int *pX2 {pX};
  
  if (pX == pX2)
    { cout << "True!" << endl; }

  if (*pX == *pX2)
    { cout << "True!" << endl; }

  // pointer initialization
  int y {1}, *pY {&y};

  cout << "The value in y is " << y;
  cout << " stored at address " << pY << endl;


  // initialize as null pointer
  int *pInt {nullptr};

  // check if pointer is null pointer
  if (pInt != nullptr)
    { cout << "True!" << endl; }
  else
    { cout << "False!" << endl; }
  
  if (pInt) // same conditional than above but with shorter notation
    { cout << "True!" << endl; }
  else
    { cout << "False!" << endl; }


  // pointers to classes/structs
  Square sq {99};      // Square object
  Square *pSq = &sq;  // Pointer to square 

  //cout << *pSq.getSide() << endl;
  // the above line does not work because dot selector has
  // priority over the * operator; above is the same as:
  //cout << *(pSq.getSide()) << endl; 


  cout << (*pSq).getSide() << endl;  // this works but is hard to read
  
  // structure pointer operator ->
  cout << pSq->getSide() << endl;   // same as above line but easier to read

  
  return 0;
}
