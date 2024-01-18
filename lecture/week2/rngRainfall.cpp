// Average rainfall example

#include <ctime>
#include <cstdlib>
#include <iostream>

using namespace std;

const int SIZE = 1000;

int main() {
    srand(time(0));
    long sum = 0;
    for (int i=0; i < SIZE; i++) {
        float r = rand() % 100 / 50.0;
        // cout << rand() % 100 / 50.0 << endl;
        sum += r;
    }
    cout << "Avg Rainfall: " << sum / static_cast<float>(SIZE) << endl;
}