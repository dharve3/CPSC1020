#include <iostream>
#include <vector>
using namespace std;

int main()
{
  // Define a vector with 5 int values.
  vector<int> numbers = {1, 2, 3, 4, 5};
  
  // Define an iterator pointing to the 2nd element.
  //vector<int>::iterator iter = numbers.begin() + 1;
  auto iter = numbers.begin() + 1;
  
  // Insert a new element with the value 99.
  numbers.insert(iter, 99);

  // Display the vector elements using range based for loop
  for (auto element : numbers)
    { cout << element << " "; }
  cout << endl;
  
  // Traverse the cointainer using an interator
  iter = numbers.begin();
  while (iter != numbers.end())
   { cout << *iter << " ";
     iter++; }
  cout << endl;
  
  return 0;
}
