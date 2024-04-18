#include <iostream>
#include "Recommend.h"

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
    string currentRecommender;

    string command, token;
    // Menu Loop
    while (true) {
        getline(cin, command);

        // Tokensize command
        stringstream ss(command);
        ss >> token;
        // Allows for command arguments separated by a space

        if (token == "averages") {
            // Display average ratings for each book
            recommender.printAverages();
        } else if (token == "books") {
            // Display list of books
            recommender.printBooks();
        } else if (token == "debug") {
            // Toggle debugging outputs
            DEBUG = !DEBUG;
        } else if (token == "dotprod") {
            // Display current dot products
            recommender.printDotProducts(currentRecommender);
        } else if (token == "file") {
            // Display data that the recommendation system is using
            recommender.printRecommendationRatings();
        } else if (token == "menu") {
            // Display menu of commands
            cout << "BOOK RECOMMENDATION SYSTEM MENU" << endl;
            cout << "===============================" << endl;
            cout << "averages - display average ratings for each book" << endl;
            cout << "books - display books in alphabetic order" << endl;
            cout << "debug - toggles debugging outputs" << endl;
            cout << "dotprod - display current dot products" << endl;
            cout << "file - fancy display of file data" << endl;
            cout << "menu - display this menu" << endl;
            cout << "books - display books in alphabetic order" << endl;
            cout << "names - display recommender names" << endl;
            cout << "recommend <name> - display book recommendations based upon recommender <name>" << endl;
            cout << "sim - display current similarities" << endl;
            cout << "simavg - display averages for current similarities" << endl;
            cout << "quit - exits the program" << endl;
        } else if (token == "names") {
            // Display list of recommender names
            recommender.printNames();
        } else if (token == "ratings") {
            // Display ratings
            recommender.printRecommendationRatings();
        } else if (token == "recommend") {
            // Get name for recommendation
            string name;
            ss >> name;
            // Compute recommendation
            recommender.computeRecommendation(name);
            // Update current recommender name
            currentRecommender = name;
        } else if (token == "similar") {
            // Display similarList
            recommender.printSimilarList(currentRecommender);
        } else if (token == "simavg") {
            // Display simAvg
            recommender.printSimAvg(currentRecommender);
        } else if (token == "quit") {
            // Exit the program
            break;
        } else {
            // Invalid command
            cout << "Invalid command. Type 'menu' to see the list of commands." << endl;
        }
    }

    return 0;
}
