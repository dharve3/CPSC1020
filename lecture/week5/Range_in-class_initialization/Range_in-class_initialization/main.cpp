#include <iostream>
#include "Range.h"
using namespace std;

int main()
{

  Range range1;  
  cout << "Min: " << range1.getMin() << endl;
  cout << "Max: " << range1.getMax() << endl;

  Range range2 {4.0, 5.0};
  cout << "Min: " << range2.getMin() << endl;
  cout << "Max: " << range2.getMax() << endl;
  
  return 0;
}
