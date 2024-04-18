#include <iostream>
#include "Recommend.h"

// Command: averages - display average ratings for each book

// Command: books - display list of books

// Command: debug - toggles debugging outputs

// Command: dotprod - display current dot products

// Command: file - display ratings in fancy format

// Command: menu - display menu of commands

// Command: names - display list of recommender names

// Command: ratings - display ratings

// Command: recommend <name> - display book recommendations based upon recommender <name>

// Command: similar - display current similarities

// Command: simavg - display averages for current similarities

// Command: quit - exits the program

int main(int argc, char* argv[]) {
    // Check for the correct number of command line arguments
    if (argc != 2) {
        cerr << "Usage: " << argv[0] << " <filename>" << endl;
        return 1;
    }

    // File name containing recommendations data
    string fileName = argv[1];

    // Create an instance of Recommend class
    Recommend recommender(fileName);

    string command;
    // Menu Loop
    while (true) {
        getline(cin, command);

        // Tokensize command
        stringstream ss(command);
        string token;
        ss >> token;

        if (token == "averages") {
            
        }
    }

    // Print total number of books and recommenders
    cout << "Total number of books: " << recommender.getBookCount() << endl;
    cout << "Total number of recommenders: " << recommender.getRecommenderCount() << endl;

    // Compute recommendation for a specific recommender
    recommender.computeRecommendation("Bob");

    // Print recommendation ratings
    recommender.printRecommendationRatings();

    // Print dot products
    recommender.printDotProducts("Bob");

    // Print book averages
    recommender.printAverages();

    // Print similar list
    recommender.printSimilarList("Bob");



    return 0;
}
