// This program demonstrates an overloaded function template.

#include <iostream>
using namespace std;

template <class T>
T sum(int val1, int val2)
{
    return val1 + val2;
}

template <class X>
T sum(T val1, T val2, T val3)
{
    return val1 + val2 + val3;
}


int main()
{
    cout << "The sum of 2 doubles is: " << sum(45.7, 22.5) << endl;
    cout << "The sum of 2 integers is: " << sum(5,10) << endl;
    cout << "The sum of 3 integers is: " << sum(1, 2, 3) << endl;
    cout << "The sum of 3 doubles is: " << sum(3.1418, 3.1418, 3.1418) << endl;

    return 0;
}