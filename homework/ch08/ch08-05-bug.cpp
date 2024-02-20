/* C++ program to demonstrate a 2D vector where each of its elements is of different size. It builds the famous Pascal's Triangle. */
// helpful tool: https://onlinemathtools.com/generate-pascals-triangle
// Links to an external site.

#include <iostream> // Added include for iostream
#include <vector>
#include <stdlib.h> // Added stdlib for atoi
using namespace std;

unsigned long long int binomialCoeff(unsigned long long int n, unsigned long long int k) {
    unsigned long long int res = 1;
    if (k > (n - k))
      k = (n - k);
    for (unsigned long long int i = 0; i < k; ++i) { // Fixed For loop syntax error
      res *= (n - i);
      res /= (i + 1);
    }
    return res;
}

// read size of triangle from command line argument and convert to an integer
int main(int argc, char *argv[]) {
    int numLines = atoi(argv[1]); // Added typecast and use argv[1]
    
    vector<vector<unsigned long long int>> pascal;

    for (unsigned long long int line = 0; line <= numLines; line++) {
        vector<unsigned long long int> aRow;
        for (unsigned long long int row = 0; row <= line; row++) { // Fixed for loop condition, <= line
            if (row == 0 || row == line)
              aRow.push_back(1); // push_back 1 instead of 2
            else
              aRow.push_back(binomialCoeff(line, row)); // Fixed binomialCoeff syntax error, fixed argument order, should be line, row, not row, line
        }
        pascal.push_back(aRow); // Fixed push_back syntax error
    }

    /* Now we print the vector that we just defined using a simple
    range-based for loop. */
    for (vector<unsigned long long int> row : pascal) {
        for (unsigned long long int value : row)
            cout << value << " ";
      cout << endl; // endl syntax error
    }

    return 0;
}