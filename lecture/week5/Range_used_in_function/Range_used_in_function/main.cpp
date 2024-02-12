#include <iostream>
#include "Range.h"
using namespace std;

void showData(const Range &r)
{
  cout << "Min: " << r.getMin() << endl;
  cout << "Max: " << r.getMax() << endl;
}

int main()
{

  Range range;
  showData(range);
  
  return 0;
}
