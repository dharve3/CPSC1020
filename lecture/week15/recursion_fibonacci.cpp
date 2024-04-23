// This program demonstrates a recursive function
// that calculates Fibonacci numbers.  
#include <iostream>
using namespace std;

int fib(int);   // Function prototype


int main()
{
  int num;
  cout << "How many Fibonacci numbers should be calculated? ";
  cin >> num;

  for (int x = 0; x < num; x++)
    cout << fib(x) << " ";
  cout << endl;

  return 0;
}

//*****************************************
// Function fib. Accepts an int argument  *
// in n. This function returns the nth    *
// Fibonacci number.                      *
//*****************************************
int fib(int n)
{
  if (n <= 0)        //base case
    return 0;
  else if (n == 1)   //base case
    return 1;
  else
    return fib(n - 1) + fib(n - 2);
}
