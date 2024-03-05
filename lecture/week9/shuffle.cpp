// shuffle.cpp
// Desc

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>
#include <chrono>
#include <random>

using namespace std;

// Helper function to print elements of the vector
void printVector(vector<int> v, string label) {
    cout << label;
    // Range based for loop
    for (int i : v) {
        cout << i << " ";
    }
    cout << endl << endl;
}

// Main
int main(int argc, char* argv[]) {
    vector<int> ints;
    int seed;

    // Get time based seed
    unsigned timeseed = 
    chrono::system_clock::now().time_since_epoch().count();

    // Use cmdline args OR use current time to set seed
    if (argc == 2) {
        seed = stoi(argv[1]);
    } else {
        seed = time(0);
    }


    // Fill vector with some values
    ints.push_back(56);
    ints.push_back(5);
    ints.push_back(6);
    ints.push_back(569);
    ints.push_back(536);
    ints.push_back(24);
    ints.push_back(2);
    ints.push_back(65);
    ints.push_back(77);
    ints.push_back(44);

    // Print the unshuffled values
    printVector(ints, "before shuffle: ");

    // Shuffle using random_shuffle algorithm
    random_shuffle(ints.begin(), ints.end());

    printVector(ints, "after random_shuffle: ");

    // Shuffle using shuffle aglorithm
    shuffle(ints.begin(), ints.end(), default_random_engine(timeseed));

    printVector(ints, "after shuffle: ");

}