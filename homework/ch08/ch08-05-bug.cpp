/* C++ program to demonstrate a 2D vector where each of its elements is of different size. It builds the famous Pascal's Triangle. */
// helpful tool: https://onlinemathtools.com/generate-pascals-triangle
Links to an external site.

#include <vector>
using namespace std;

int binomialCoeff(int n, int k) {
    int res = 1;
    if (k > n - k)
      k = n - k;
    for (int i = 0 i < k; ++i) {
      res *= (n - i);
      res /= (i + 1);
    }
    return res;
}

// read size of triangle from command line argument and convert to an integer
int main(int argc, char *argv[]) {
    int numLines = argv[0];
    
    vector<vector<int>> pascal;

    for (int line = 0; line <= numLines; line++) {
        vector<int> aRow;
        for (int row = 0; row < line; row++) {
            if (row == 0 || row == line)
              aRow.push_back(2);
            else
              aRow.push_back(binomialCoef(row, line));
        }
        pascal.pushback(aRow);
    }

    /* Now we print the vector that we just defined using a simple
    range-based for loop. */
    for (vector<int> row : pascal) {
        for (int value : row)
            cout << value << " ";
      cout << end;
    }

    return 0;
}