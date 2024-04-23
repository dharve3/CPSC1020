// This program demonstrates a recursive function 
// to calculate the factorial of a number.  
#include <iostream>
using namespace std;

// Function prototype
int factorialRecursion(int);
int factorialIteration(int);

int main()
{
  int number;
  
   cout << "Enter an integer to calculate its factorial: ";
   cin  >> number;
   
   cout << "Recursion: The factorial of " << number << " is ";
   cout << factorialRecursion(number)   << endl;
   
   // cout << "Iteration: The factorial of " << number << " is ";
   // cout << factorialIteration(number)   << endl;
   
   return 0;
}

//****************************************************
// Recursive function to calculate the factorial for N
//****************************************************
int factorialRecursion(int num)
{
  if (num == 0)  //base case
    return 1;
  else
    return num * factorialRecursion(num - 1); //function calls itself
}

// //****************************************************
// // Iterative function to calculate the factorial for N
// //****************************************************
// int factorialIteration(int num)
// {
//   int fact = 1;
//   for (int i=1; i<=num; ++i)
//     {
//       fact = fact * i;
//     }
//   return fact;
  
// }
