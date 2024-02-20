#include <iostream>
#include <vector>
using namespace std;

class Square
{
private:
  int side {1};
public:
  Square() = default;
  Square(int s) : side{s} {}
  int calcArea()
  {return side * side;}
};


int main()
{

  // initialize vector following modern C++ guidelines
  vector<int> vec {4, 8, 15, 16, 23, 42};
  cout << vec[2] << endl;
  cout << vec.at(2) << endl;

  // range-based for loop
  for (int num : vec)
    {
      cout << num << endl;
    }

  // copy one vector into another
  vector<int> vec2 {vec};
  for (int num : vec2)
    {
      cout << num << endl;
    }

  // change all elements in vector 
  for (int& num : vec2)
      {
	num = num + 100;
      }
  for (int num : vec2)
    {
      cout << num << endl;
    }

  // determine the size of a vector
  cout << "Size of vec: " << vec.size() << endl;
  //for (int i = 0; i < vec.size(); ++i) // note that this will cause a warning
  for (vector<int>::size_type i = 0; i < vec.size(); ++i)
    {
      cout << vec[i] << endl;
    }

  // add element to vector
  vec.push_back(99);
  cout << "Size of vec after push back: " << vec.size() << endl;

  // remove element from vector
  vec.pop_back();
  cout << "Size of vec after pop back: " << vec.size() << endl;

  // clear all elements
  vec.clear();
  cout << "Size of vec after clear: " << vec.size() << endl;

  // check if vector is empty
  cout << vec.empty() << endl;
  vec.push_back(1);
  cout << vec.empty() << endl;

  // vector of objects
  vector<Square> squares {1, 2, 3}; 
  
  for (Square sq : squares)
    {
      cout << sq.calcArea() << endl;
    }

  
  return 0;
}

