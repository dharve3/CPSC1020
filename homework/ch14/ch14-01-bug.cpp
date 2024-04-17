// This program demonstrates a recursive function for
// counting the number of times a character appears
// in a string.
#include <iostream>
#include <string>
using namespace std;

class Frequency {
public:
    Frequency() {}
    //************************************************
    // Function frequency. This recursive function   *
    // counts the number of times the character      *
    // ch appears in inputString. The search begins  *
    // at index position in the string.              *
    //************************************************
    int recurse(char ch, string inputString, int position)
    {
       if (position == inputString.length())   //base case
          return 0;
       if (inputString[position] == ch)
          return 1 + recurse(ch, inputString, position + 1); // position + 1
       else
          return recurse(ch, inputString, position + 1); // position + 1
    }
};

int main()
{
    string inputString;
    cin >> inputString;
    char letter;
    cin >> letter;

    Frequency f;

    cout << "The letter " << letter << " appears "
 << f.recurse(letter, inputString, 0) << " times.\n";
   return 0;
}