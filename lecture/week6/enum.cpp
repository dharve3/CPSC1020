#include <iostream>
using namespace std;

int main()
{

  enum Fruit {apple, grape, orange};
  enum class Days {Mon, Tue, Wed, Thur, Fri, Sat, Sun};

  Fruit fruit {apple}; // scope, by default, is scope of "plain" enum
  Days day {Days::Mon}; // scope is scope of enum class, hence we have to
                        // provide the scope region

  cout << fruit << endl; // print 0
  //cout << day << endl; // does NOT work
  cout << static_cast<int>(day) << endl;
  
  if (fruit == apple)
    { cout << "It's an apple!" << endl; }

  if (fruit == 0)
    { cout << "It's an apple!" << endl; }


  
  if (day == Days::Mon)
    { cout << "Oh no, it's Monday!" << endl; }

  if (day == static_cast<Days>(0))
    { cout << "Oh no, it's Monday!" << endl; }
  
  
  return 0;
}
