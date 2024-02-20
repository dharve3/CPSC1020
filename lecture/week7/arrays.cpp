#include <iostream>
using namespace std;

int sumArray(const int [], int); // prototype

class Square
{
private:
  int side {1};
public:
  Square() = default;
  Square(int s) : side{s} {};
  int calcArea()
    {return side * side;}
};

  

int main()
{
  // initialize array following modern C++ guidelines
  int a[] {4, 8, 15, 16, 23, 42}; // array with 6 elements in 'slots' 0-5

  cout << a << endl; // be careful! what does this print?

  cout << a[1] << endl;

  cout << a[6] << endl; // be careful! we are out of bounds!  

  // calculate the sum of all array elements
  // 4 + 8 + 15 + 16 + 23 + 42 = 108
  int sum = 0;
  for (int i = 0; i < 6; ++i) // be careful here that you are not out of bounds
    {
      sum += a[i];
    }

  cout << sum << endl; // yeah, it's 108! 

  // range based for loop
  int sum2 = 0;
  for (int num : a)
    {
      sum2 += num;
    }

  cout << sum2 << endl; // it's 108 again

  // using arrays as a function argument
  cout << sumArray(a, 6) << endl; // and it's 108 again


  // arrays of objects
  Square squares[] {1, 2, 3, 4, 5};

  for (int i = 0; i < 5; ++i)
    {
      cout << squares[i].calcArea() << endl;
    }
  
  
  return 0;
}


// function definition
// Note: arr[] passes the starting memory address of arr to the function,
// which means we are passing by reference not by value. We can protect the
// elements of the arr by setting arr to const
int sumArray(const int arr[], int size) 
{ int sum = 0;
  for (int i = 0; i < size; ++i) 
    {
      sum += arr[i];
    }

  return sum;
}


      
