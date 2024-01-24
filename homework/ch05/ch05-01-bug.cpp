// This program demonstrates a simple while loop.
#include <iostream>
using namespace std;

int main()
{
   int count = 1;

   while (count <= 5)
   {
      cout << "Hello   ";
      // Logic Error: Missing increment for count variable, resulting in infinte loop.
      count++;
   }
   cout << "\nThat's all!\n";
   return 0;
}