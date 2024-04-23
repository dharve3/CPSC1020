#ifndef STATS_H
#define STATS_H

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Stats {
private:
    vector<int> values;
    string fileName;
    vector<long long int> fibonacciNums;
    // Any others

public:
    // Other constructor in stats.cpp
    Stats(); // Default Constructor
    Stats(string fn);

    int capacity();
    int count();
    int countEven();
    int countOdd();
    int countFib();

    double avgAll();
    double avgEven();
    double avgOdd();
    double avgFib();

    void generateFib();
};

#endif // STATS_H