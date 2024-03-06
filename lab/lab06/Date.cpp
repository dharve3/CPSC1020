// Name: Dylan Harvey
// Date: 3/8/2024
// Class: CPSC 1021
// Lab Name: Lab06 - Date Class with I/O
// File Name: Date.cpp
// Desc: Source file for Date class, declares functions to display and compare dates.

#include "Date.h"

// Getters and setters
int Date::getMonth() const {
    return month;
}
void Date::setMonth(int m) {
    month = m;
}
int Date::getDay() const {
    return day;
}
void Date::setDay(int d) {
    day = d;
}
int Date::getYear() const {
    return year;
}
void Date::setYear(int y) {
    year = y;
}

// Helper function to print date
string Date::print() {
    stringstream ss;

    ss << setw(10) << MONTHS[getMonth() - 1]
       << setw(3) << getDay()
       << setw(5) << getYear();

    return ss.str();
}
// Compares two dates, returns true if first date is earlier
static bool compare(const Date d1, const Date d2) {
    if (d1.year != d2.year)
        return d1.year < d2.year;
    if (d1.month != d2.month)
        return d1.month < d2.month;
    if (d1.day != d2.day)
        return d1.day < d2.day;
    return false; // If dates are the exact same
}