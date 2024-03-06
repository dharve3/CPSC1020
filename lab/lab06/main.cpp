// Name: Dylan Harvey
// Date: 3/8/2024
// Class: CPSC 1021
// Lab Name: Lab06 - Date Class with I/O
// File Name: main.cpp
// Desc: 

#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include "Date.h"

using namespace std;

int main(int argc, char const *argv[] ) {
    // Validate the number of inputs
    if (argc != 3) {
            cerr << "Usage: " << argv[0] << " <input_file> <output_file>" << endl;
            return 1;
    }

    // Input and output streams from cmdline args
    ifstream inputFile(argv[1]);
    ofstream outputFile(argv[2]);

    if (!inputFile) {
        cerr << "Error: Unable to open input file." << endl;
        return 1;
    }
    if (!outputFile) {
        cerr << "Error: Unable to open output file." << endl;
        return 1;
    }

    int numDates;
    inputFile >> numDates; // Get first value from file as the number of dates

    vector<Date> dates; // Vector to store date objects

    // Read from file
    for (int i = 0; i < numDates; i++) {
        int month, day, year;
        inputFile >> month >> day >> year;
        dates.emplace_back(month, day, year);
    }

    // Sort dates using compare function
    sort(dates.begin(), dates.end(), Date::compare);

    // Write to output file
    for (const auto& date : dates) {
        outputFile << date.print() << endl;
    }

    return 0;
}