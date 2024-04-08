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

using namespace std;

int main() {
    // Create a set to store unique movie titles
    set<string> uniqueMovieTitles;

    // Read the file to extract unique movie titles
    ifstream file("movie_reviews.txt");
    string movieTitle, reviewerName, rating;
    while (getline(file, movieTitle) && getline(file, reviewerName) && getline(file, rating)) {
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
        reviewerRatings[reviewerName].push_back(stoi(rating));
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