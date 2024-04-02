#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

template <typename T>
T findMax(T x, T y)
{
  return (x > y) ? x: y;
}

string findMax(string x, string y)
{
  return (x.length() > y.length()) ? x: y;
}


int main()
{
  cout << fixed << showpoint << setprecision(1);
  
  // Find max of two integers
  int int1 {2}, int2 {4};
  cout << "Max integer: " << findMax(int1, int2) << endl;

  // Find max of two doubles
  double double1 {2.0}, double2 {4.0};
  cout << "Max double: " << findMax(double1, double2) << endl;

  // Find max of two characters
  char char1 {'a'}, char2 {'b'};
  cout << "Max character: " << findMax(char1, char2) << endl;

  // Find max of two strings
  string str1 {"Alice"}, str2 {"Bob"};
  cout << "Max character: " << findMax(str1, str2) << endl;

  return 0;
}


