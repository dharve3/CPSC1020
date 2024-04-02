// This program illustrates exception handling.
// Adapted from program 16-1 in textbook
#include <iostream> 
#include <string>
using namespace std;

// Function definition
double divide(double numerator, double denominator)
{
   if (denominator == 0)
     {throw string("ERROR: Cannot divide by zero.\n"); }
   else
     { return numerator / denominator; } 
}


int main()
{
   int num1, num2;
   double quotient;
	  
   cout << "Enter two numbers separated by space: ";
   cin >> num1 >> num2;
   try
   {
      quotient = divide(num1, num2);
      cout << "The quotient is " << quotient << endl;
   }
   catch (string exceptionString)
   {
      cerr << exceptionString;
   }
   cout << "End of the program.\n";	
   return 0;
}

