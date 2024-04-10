/* In this program, the initial `std::vector` `stringData` contains strings, some
of which are duplicates. These strings are then added to a `std::set` to remove
duplicates. The unique elements are then transferred back to a new `std::vector`
called `uniqueStrings`, which is then displayed.

NOTE: you need to finish the code as specified in the comments
NOTE: std::set was added to C++ in verion 17 so you may need to compile with -
std=c++17 */

#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int main() {
    vector<string> stringData = {"apple", "banana", "apple", "orange", "banana",
    "grape", "kiwi", "banana", "mango", "orange", "apple", "cherry", "mango", "kiwi",
    "strawberry", "grape", "cherry", "apple", "orange", "banana"};
    // Create a set to remove duplicates
    set<string> stringSet(stringData.begin(), stringData.end());

    // Create a new vector with unique elements from the set
    vector<string> uniqueStrings(stringSet.begin(), stringSet.end());

    // Display the unique elements in the new vector using a single space to
    // separate each one. Use an endl at the end of the list.
    cout << "Unique elements in the new vector: "; 
    for (const auto& s : uniqueStrings) {
        cout << s << " ";
        // NOTE: may need to remove the tailing " "
    }
    cout << endl;

    return 0;
}