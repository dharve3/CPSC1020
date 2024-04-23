#include "stats.h"

int main() {
    Stats Stats("numbers.txt");

    cout << "Capacity: " << stats.capacity() << endl;
    cout << "Count: " << stats.count() << endl;
    cout << "Count of Even: " << stats.countEven() << endl;
    cout << "Count of Odd: " << stats.countOdd() << endl;
    cout << "Count in Fibonacci: " << stats.countFib() << endl;
    cout << "Average of All: " << stats.avgAll() << endl;
    cout << "Average of Even: " << stats.avgEven() << endl;
    cout << "Average of Odd: " << stats.avgOdd() << endl;
    cout << "Average of Fibonacci: " << stats.avgFib() << endl;

    return 0;
}