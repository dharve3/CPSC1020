#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

class Stats {
private:
    vector<int> values;
    string fileName;
    static vector<int> fibonacciNums;
    // Any others

public:
    // Other constructor in stats.cpp
    Stats(): values(100), fileName("") { } // Default Constructor

    int capacity();
    int count();
    int countEven();
    int countOdd();
    int countFib();

    double avgAll();
    double avgEven();
    double avgOdd();
    double avgFib();
};