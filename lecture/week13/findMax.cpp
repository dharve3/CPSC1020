// demonstrates the need for templates
// play with this code to make it work for int, double and char
// NOTE: you will have to change the code for each data type
// correct code for each is commented

#include <iostream>
#include <iomanip>
using namespace std;
int findMax(int x, int y)
// double findMax(double x, double y)
// char findMax(char x, char y)
{
  return (x > y) ? x: y;
}
int main()
{
  cout << fixed << showpoint << setprecision(1);

  // Find max of two integers
  int int1 {2}, int2 {4};
  cout << "Max integer: " << findMax(int1, int2) << endl;
  // // Find max of two doubles
  // double double1 {2.0}, double2 {4.0};
  // cout << "Max double: " << findMax(double1, double2) << endl;
  // // Find max of two characters
  // char char1 {'a'}, char2 {'b'};
  // cout << "Max character: " << findMax(char1, char2) << endl;

  return 0;
}
