#include "stats.h"

bool isEven(int num) {
    return num % 2 == 0;
}

bool isOdd(int num) {
    return num % 2 != 0;
}

bool isFibonacci(int num) {
    int a = 0, b = 1;
    while (a <= num) {
        if (a == num) return true;
        int temp = b;
        b = a + b;
        a = temp;
    }
    return false;
}

Stats::Stats() : values(100), fileName("")  {}

Stats::Stats(string fn): fileName(fn) {
    ifstream inputFile(fn);

    // Check if file opened successfully
    if (!inputFile.is_open()) {
        cerr << "Error opening file: " << fn << endl;
        exit(1); 
    }

    string line;
    int value;
    while (getline(inputFile, line)) {
        // Read value
        value = stoi(line);
        values.push_back(value);
    }
}

void Stats::generateFib() {
    int i;
    
    for (i = 0; i <= 50; i++) {
        if (i == 0 || i == 1) {
            fibonacciNums.push_back(1);
        } else {
            fibonacciNums.push_back(fibonacciNums[i-2] + fibonacciNums[i-1]);
        }
    }
}


int Stats::capacity() {
    return values.capacity();
}

int Stats::count() {
    return values.size();
}

int Stats::countEven() {
    int count = 0;
    for (int v : values) {
        if (v % 2 == 0) {
            count++;
        }
    }
    return count;
}

int Stats::countOdd() {
    int count = 0;
    for (int v : values) {
        if (v % 2 == 1) {
            count++;
        }
    }
    return count;
}

int Stats::countFib() {
    int count = 0;
    for (int v : values) {
        auto it = find(fibonacciNums.begin(), fibonacciNums.end(), v);
        if (it != fibonacciNums.end()) {
            count++;
        }
    }
    return count;
}

double Stats::avgAll() {
    if (values.empty()) return 0.0;
    int sum = 0;
    for (int v : values) {
        sum += v;
    }
    return static_cast<double>(sum) / values.size();
}

double Stats::avgEven() {
    if (values.empty()) return 0.0;
    int sum = 0;
    int count = countEven();
    for (int v : values) {
        if (isEven(v)) {
            sum += v;
        }
    }
    return count == 0 ? 0.0 : static_cast<double>(sum) / count;
}

double Stats::avgOdd() {
    if (values.empty()) return 0.0;
    int sum = 0;
    int count = countOdd();
    for (int v : values) {
        if (isOdd(v)) {
            sum += v;
        }
    }
    return count == 0 ? 0.0 : static_cast<double>(sum) / count;
}

double Stats::avgFib() {
    if (values.empty()) return 0.0;
    int sum = 0;
    int count = countFib();
    for (int v : values) {
        if (isFibonacci(v)) {
            sum += v;
        }
    }
    return count == 0 ? 0.0 : static_cast<double>(sum) / count;
}