#include <iostream>
using namespace std;

struct Dimensions
{
  int length {0},
    width {1},
    height {2};
};

void showDimensions(Dimensions d)
{
  cout << "Length: " << d.length << endl;
  cout << "Width: " << d.width << endl;
  cout << "Height: " << d.height << endl;
}


int main()
{
  Dimensions dim1;
  showDimensions(dim1);

  Dimensions dim2 {3, 4, 5};
  showDimensions(dim2);

  
  return 0;
}
