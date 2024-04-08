/* Here is an example C++ program that uses STL pair and sorts the student names and grade point averages in descending order:

In this program, we first create a vector of pairs `students` to store the student names and GPAs. We then ask the user to input the number of students and their names and GPAs, which are added to the vector using the `push_back()` method.

Next, we use the `sort()` algorithm to sort the `students` vector in descending order of GPA. If there's a tie, we sort by name in ascending order. We do this by providing a lambda function as the third argument to `sort()`, which compares two pairs based on their GPA and name values.

Finally, we output the sorted student names and GPAs using a range-based for loop and the `auto` keyword to automatically deduce the type of each element in the vector.
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<pair<string, double>> students;
    string name;
    double gpa;
    int n;

    cout << "Enter the number of students: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the name and GPA of student " << i + 1 << " separated by a space: ";
        cin >> name >> gpa;
        students.push_back(make_pair(name, gpa));
    }

    sort(students.begin(), students.end(), [](const pair<string, double>& a, const pair<string, double>& b)
    {
        if (a.second != b.second)
            return a.second > b.second;
        else
            return a.first < b.first;
    });

    cout << "Student names and GPAs sorted by descending GPA:" << endl;

    for (const auto& student : students)
    {
        cout << student.first << ": " << student.second << endl;
    }

    return 0;
}
