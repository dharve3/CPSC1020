// Name: Dylan Harvey
// Class: CPSC-1020
// Date: 4/13/2024
// STL Mini Program - Cities
// Time: ~30 minutes
// Desc: Uses an input file and names of states (from cmdline args) to display the number of cities in each state

#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char *argv[]) {
    // Ensure cmdline args are correct
    if (argc < 2) {
        cerr << "Usage: " << argv[0] << " <state1> <state2> ..." << endl;
        return 1;
    }

    // Open the input file
    ifstream file("cities.txt"); // open the file
    if (!file.is_open()) {
        cerr << "Unable to open file" << endl;
        return 1;
    }

    // Read the input file and populate a map with states as keys and cities as values
    map<string, vector<string>> stateCities;
    string line;
    while (getline(file, line)) {
        istringstream iss(line); // input stringstream object
        string state, city;
        if (getline(iss, state, ',') && getline(iss, city)) {
            stateCities[state].push_back(city);
        }
    }

    // Output the number of cities for each state provided in the cmdline args
    for (int i = 1; i < argc; i++) {
        string state = argv[i];
        if (stateCities.find(state) != stateCities.end()) {
            cout << stateCities[state].size() << endl;
        } else {
            cout << "0" << endl;
        }
    }

    return 0;
}