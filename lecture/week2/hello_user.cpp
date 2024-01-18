// A simple C++ program that greets the user
#include <iostream>
#include <string>
using namespace std;

int main()
{
  string fname, lname;
  cout << "Hello, user! Please enter your first name: ";
  cin >> fname;
  cout << "Please enter your last name: ";
  cin >> lname;

  cout << "Hi, " << fname << " " << lname << "! " << "Nice to meet you!" << endl;
  
  return 0;
}
