// This program demonstrates a recursive function
// to calculate the factorial of a number.
#include <iostream>
#include <string>
using namespace std;

class Factorial {
public:
    Factorial() {}
    //****************************************************
    // Definition of factorial. A recursive function to  *
    // calculate the factorial of the parameter, num.    *
    //****************************************************
    int recurse(int num)
    {
      if (num == 0)  //base case
        return 1; // when reaches 0, exit
      else
        return num * recurse(num - 1); // num * recurse(num - 1)
    }

};

int main()
{

     Factorial f;
     int num;
     cin >> num;
     cout << num << "! = " << f.recurse(num) << endl;
   return 0;
}