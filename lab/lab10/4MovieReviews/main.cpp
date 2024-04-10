/* This is an almost complete solution to the problem to the movie
review problem. HOWEVER, you will notice an error in the output that
shows the ratings from each reviewer. Identify this error and fix the
code to work properly. */

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

int main() {
    // Create a set to store unique movie titles
    set<string> uniqueMovieTitles;

    // Read the file to extract unique movie titles
    ifstream file;
    file.open("movie_reviews.txt");
    if (!file.is_open()) {
        cout << "Error opening file." << endl;
        return 1;
    }
    string movieTitle, reviewerName, rating;
    while (getline(file, movieTitle) && getline(file, reviewerName) && getline(file, rating)) {
        // cout << "DEBUG: " << movieTitle << endl;
        uniqueMovieTitles.insert(movieTitle);
    }
    file.close();
    
    // Copy unique movie titles from set to vector
    vector<string> movieTitles(uniqueMovieTitles.begin(), uniqueMovieTitles.end());

    // Create a map to store reviewer names as keys and vectors of ratings as values
    map<string, vector<int>> reviewerRatings;

    // Read the file again to extract reviewer names and ratings
    file.open("movie_reviews.txt");
    while (getline(file, movieTitle) && getline(file, reviewerName) && getline(file, rating)) {
        // cout << "DEBUG: " << reviewerName << endl;
        if (reviewerRatings[reviewerName].size() != movieTitles.size())
            reviewerRatings[reviewerName].resize(movieTitles.size(), 0); // resize the vector with 0s

        auto it = find(movieTitles.begin(), movieTitles.end(), movieTitle); // create iterator for current movie title
        if (it != movieTitles.end()) {
            int index = distance(movieTitles.begin(), it); // find the index of the movie title
            reviewerRatings[reviewerName][index] = stoi(rating); // assign the rating at that location
        }
        // reviewerRatings[reviewerName].push_back(stoi(rating));
    }
    file.close();

    // Output each movie title separated by /
    cout << "HERE ARE THE MOVIE TITLES\n";
    cout << "==========================\n";
    for (const auto& m : movieTitles) {
        cout << m << " / ";
    }
    cout << endl << endl;

    // Output each reviewer followed by their ratings for each movie
    // I believe the error is that the reviews aren't in order with the given movies
    cout << "HERE ARE THE MOVIE RATINGS\n";
    cout << "===========================\n";
    for (const auto& pair : reviewerRatings) {
        cout << pair.first << ": ";
        auto ratings = pair.second;
        auto it = ratings.begin();
        while (it != ratings.end()) {
            cout << *it;
            ++it;
            if (it != ratings.end()) {
                cout << ",";
            }
        }
        cout << endl;
    }
    
    return 0;
}