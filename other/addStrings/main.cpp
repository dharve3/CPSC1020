// "Add" strings
// Joke project

#include <iostream>
#include <string>

using namespace std;

string addString(const string a, const string b) {
    string c;
    for (int i = 0; i < a.length(); i++) {
        c += char(int(a[i]) + int(b[i]));
    }
    return c;
}

int main() {
    string str1, str2;
    cout << "Input 2 strings (preferably of the same length) separated by a space: ";
    cin >> str1 >> str2;

    cout << addString(str1, str2) << endl;
}