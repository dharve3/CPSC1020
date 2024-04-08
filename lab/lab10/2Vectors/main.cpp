/* In this program, each pair represents a student's name along with their
scores in different subjects. The program populates the vector with sample
student data and then displays each student's name followed by their
corresponding scores.*/

#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int main() {
    vector<pair<string, vector<int>>> studentData = {
        {"Alice", {85, 90, 88, 92, 95}},
        {"Bob", {78, 80, 85}},
        {"Charlie", {92, 95, 90, 87, 76, 90}},
        {"Diana", {80, 85}}
    };
    // Display the contents
    for (const auto& student : studentData) {
        cout << student.first << "'s scores: ";
        for (int score : student.second) {
            cout << score << " ";
        }
        cout << endl;
    }
    
    return 0;
}
// Modify the above program to output each student’s name and their AVERAGE
// score rather than the individual scores. Be sure to take into account the
// number of scores for each student.