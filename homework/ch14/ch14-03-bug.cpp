// This program demonstrates a recursive function to
// calculate the greatest common divisor (gcd) of two
// numbers.
#include <iostream>
#include <string>
using namespace std;

class GCD {
public:
    GCD() {}
    //*********************************************************
    // Definition of gcd. This function uses recursion to     *
    // calculate the greatest common divisor of two integers, *
    // passed into the parameters x and y.                    *
    //*********************************************************
    int recurse(int x, int y)
    {
       if (y == 0)    //base case
          return x; // return x when y is 0
       else
          return recurse(y, x % y); // x mod y 
    }

};

int main()
{
     GCD g;
     int x, y;
     cin >> x >> y;
     cout << g.recurse(x, y) << endl;
   return 0;
}