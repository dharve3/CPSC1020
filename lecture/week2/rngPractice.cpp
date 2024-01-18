// demo using rand(), avg

#include <ctime>
#include <cstdlib>
#include <iostream>

using namespace std;

const int SIZE = 1000;

int main() {
    srand(time(0));
    long sum = 0;
    for (int i=0; i < SIZE; i++) {
        int r = rand() % 10 + 1;  // + 1, so between 1-10 not 0-9
        // cout << rand() % 10 + 1 << endl;
        sum += r;
    }
    cout << sum / static_cast<float>(SIZE) << endl;
}