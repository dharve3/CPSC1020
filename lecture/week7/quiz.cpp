// Quiz on Arrays and Vectors

#include <iostream>
#include <vector>

using namespace std;


int main() {
    // Q1:
    // what is the value of this expression: sizeof(x) / sizeof(*x) 
    int x[20];

    cout << sizeof(x) / sizeof(*x) << endl;
    // 20
    cout << endl;

    // Q2: 
    // To use a vector instead of an array in C++ the name of the library you #include is ____________.
    // vector

    // Q3:
    // One way to dynamically allocate space for an array is like this: int *values = ______ int[100]; 
    // new

    // Q4:
    // If you allocate space for an array like the previous question, then you must deallocate it using: ________[ ] values; 
    // delete

    // Q5:
    // The concept of arrays is unique to C and C++. 
    // False

    // Q6:
    // Provide the word needed to complete this C++ declaration which creates a vector of integers.  
    // vector <______> values; 
    // int

    // Q7:
    // How do you add an element to a vector?
    // push_back

    // Q8:
    // This code loops through the elements of a vector. Provide the missing word. 
    // for (vector<int>::_____________ it = values.begin(); it != values.end(); it++)
    vector<int> values;
    values.push_back(2);
    values.push_back(4);
    values.push_back(6);
    for(vector<int>::iterator it = values.begin(); it != values.end(); it++) {
        if(*it == 4) {
            values.insert(it + 1, 7);
            break;
        }
    }
    for(int i = 0; i < values.size(); i++) {
        cout << values[i] << endl;
    }
    // iterator
    cout << endl;

    // Q9: 
    // In order to insert an element in the middle of a C++ array, you would need to copy (or move) elements after the point of insertion. 
    // True

    // Q10:
    // In order to insert an element in the middle of a C++ vector, you would need to copy (or move) elements after the point of insertion. 
    // False

    // Q11:
    // Which method would you use to remove an element from a C++ vector? Give ONLY the name of the method, nothing else. 
    // erase

    // Q12:
    // What does the last line in this code do?
    vector<int> values2;
    values2.push_back(40); 
    values2.push_back(20);
    values2.push_back(50);
    values2[5] = 10;

    for(int i = 0; i < values2.size(); i++) {
        cout << values2[i] << endl;
    }
    // nothing, if not properly sized nothing happens
    cout << endl;

    return 0;
}