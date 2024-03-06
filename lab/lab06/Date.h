// Name: Dylan Harvey
// Date: 3/8/2024
// Class: CPSC 1021
// Lab Name: Lab06 - Date Class with I/O
// File Name: Date.h
// Desc: Headerfile for Date class, handles dates, and has function to display and compare dates.

#ifndef DATE_H
#define DATE_H

#include <iomanip>
#include <string>
#include <sstream> // Stringstream

using namespace std;

class Date {
private:
    int month {1};
    int day {1};
    int year {1900};
    static const string MONTHS[12];

public:
    Date() = default;
    Date(int m, int d, int y) : month(m), day(d), year(y) {}

    int getMonth() const;
    void setMonth(int m);
    int getDay() const;
    void setDay(int d);
    int getYear() const;
    void setYear(int y);
    
    string print() const;
    static bool compare(const Date d1, const Date d2);
};

#endif // DATE_H
