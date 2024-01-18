// This program illustrates how the showpoint, setprecision, and
// fixed manipulators operate both individually and when used together.
#include <iostream>
#include <iomanip>       // Header file needed to use stream manipulators
using namespace std;

int main()
{ 
  double x = 6.0;
	
  cout << x << endl;

  cout << showpoint << x << endl;

  cout << setprecision(2) << x << endl;

  cout << fixed << x << endl;

  // the above settings are preserved until changed
  double pi = 3.14159;
  cout << pi << endl;

  cout << fixed << setprecision(4);
  cout << pi << endl;  
		
  return 0;
}
