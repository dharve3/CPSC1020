// Name: Dylan Harvey
// Date: 3/8/2024
// Class: CPSC 1021
// Lab Name: Lab06 - Date Class with I/O
// File Name: Date.cpp
// Desc: Source file for Date class, defines functions to display and compare dates.

#include "Date.h"

const string Date::MONTHS[12] = {"JANUARY", "FEBRUARY", "MARCH", "APRIL", "MAY", "JUNE", "JULY", "AUGUST", "SEPTEMBER", "OCTOBER", "NOVEMBER", "DECEMBER"};

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

    ss << setw(10) << left << MONTHS[getMonth() - 1]
       << setw(3) << left << getDay()
       << setw(5) << left << getYear();

    return ss.str();
}
// Compares two dates, returns true if first date is earlier
bool Date::compare(const Date d1, const Date d2) {
    if (d1.getYear() != d2.getYear())
        return d1.getYear() < d2.getYear();
    if (d1.getMonth() != d2.getMonth())
        return d1.getMonth() < d2.getMonth();
    if (d1.getDay() != d2.getDay())
        return d1.getDay() < d2.getDay();
    return false; // If dates are the exact same
}
