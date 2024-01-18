// Avg rainfaill input example

#include <iostream>
using namespace std;

int main() {
    float sum = 0;
    int count = 0;
    float amount;

    cin >> amount;
    while (amount >= 0) {
        sum += amount;
        count++;
        cin >> amount;
    }
    cout << "Average Rainfall: " << sum / count << endl;
}
