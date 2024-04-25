#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void trimLines(const string& inputFileName, const string& outputFileName) {
    ifstream inputFile(inputFileName);
    ofstream outputFile(outputFileName);

    if (!inputFile || !outputFile) {
        cerr << "Error: Unable to open files." << endl;
        return;
    }

    string line;
    while (getline(inputFile, line)) {
        // Remove "1." from the beginning of the line
        while (line.find("1.") == 0) {
            line.erase(0, 2); // Erase the first two characters
        }

        // Remove "." from the end of the line
        while (!line.empty() && line.back() == '.') {
            line.pop_back(); // Remove the last character
        }

        // Output the trimmed line
        outputFile << line << endl;
    }

    cout << "Trimming completed." << endl;

    // Close files
    inputFile.close();
    outputFile.close();
}

int main() {
    string inputFileName = "input.txt"; // Change this to the name of your input file
    string outputFileName = "output.txt"; // Change this to the name of your output file

    trimLines(inputFileName, outputFileName);

    return 0;
}
