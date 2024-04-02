// This program illustrates exception handling.
#include <iostream>
#include <cmath>
using namespace std;

int main( )
{
  try
  {
    double x;
    cout << "Enter a number: ";
    cin >> x;    

    if (x < 0)
      { throw string("Bad argument!"); } // program enters 'try' if exception is thrown

    cout << "Square root of " << x <<  " is " << sqrt(x) << endl;

  }
  catch(string str) // catches exception of type string
    { cerr << str << endl; }

  return 0;  
}
