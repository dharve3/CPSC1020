#include <iostream>
#include "Range.h"
using namespace std;

int main()
{

  Range range;  
  //  Range range {4.0, 5.0};
  cout << "Min: " << range.getMin() << endl;
  cout << "Max: " << range.getMax() << endl;

  Range range2 {1.0, 0.0};
  cout << "Min: " << range2.getMin() << endl;
  cout << "Max: " << range2.getMax() << endl;
  
  return 0;
}
