// Name: Dylan Harvey
// Class: CPSC 1020
// Date: 2/9/2024
// Project 1
// Time: ~4 Hours
// Desc: Headerfile for Date.cpp, contains class Date.

#ifndef DATE_H
#define DATE_H

// Include statements
#include <iomanip>
#include <string>

using namespace std;

// Class Declaration
class Date 
{
private:
    int day;
    int month;
    int year;

public:
    Date();
    Date(int, int, int);

    bool setDay(int);
    bool setMonth(int);
    bool setYear(int);

    int getDay() const;
    int getMonth() const;
    int getYear() const;

    string showDate() const;
};

#endif // DATE_H