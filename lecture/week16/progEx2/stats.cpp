#include "stats.h"

// Helper function to check if even
bool isEven(int num) {
    return num % 2 == 0;
}
// Helper function to check if odd
bool isOdd(int num) {
    return num % 2 != 0;
}
// Helper function to check if fibonacci
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

// Default constructor
Stats::Stats() : values(100), fileName("")  {}
// Custom constructor
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

// Didnt end up using this
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
// Counts number of even numbers
int Stats::countEven() {
    int count = 0;
    for (int v : values) {
        if (isEven(v)) {
            count++;
        }
    }
    return count;
}
// Counts number of odd numbers
int Stats::countOdd() {
    int count = 0;
    for (int v : values) {
        if (isOdd(v)) {
            count++;
        }
    }
    return count;
}
// Counts number of fib numbers
int Stats::countFib() {
    int count = 0;
    for (int v : values) {
        if (isFibonacci(v)) {
            count++;
        }
    }
    return count;
}

// Gets average of all numbers
double Stats::avgAll() {
    if (values.empty()) return 0.0;
    int sum = 0;
    for (int v : values) {
        sum += v;
    }
    return static_cast<double>(sum) / values.size();
}
// Gets average of even numbers
double Stats::avgEven() {
    if (values.empty()) return 0.0;
    int sum = 0;
    int count = countEven(); // inefficent
    for (int v : values) {
        if (isEven(v)) {
            sum += v;
        }
    }
    return count == 0 ? 0.0 : static_cast<double>(sum) / count;
}
// Gets average of odd numbers
double Stats::avgOdd() {
    if (values.empty()) return 0.0;
    int sum = 0;
    int count = countOdd(); // inefficent
    for (int v : values) {
        if (isOdd(v)) {
            sum += v;
        }
    }
    return count == 0 ? 0.0 : static_cast<double>(sum) / count;
}
// Gets average of fib numbers
double Stats::avgFib() {
    if (values.empty()) return 0.0;
    int sum = 0;
    int count = countFib(); // inefficent
    for (int v : values) {
        if (isFibonacci(v)) {
            sum += v;
        }
    }
    return count == 0 ? 0.0 : static_cast<double>(sum) / count;
}