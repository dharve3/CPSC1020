// Name: Dylan Harvey
// Date: 3/8/2024
// Class: CPSC 1021
// Lab Name: Lab06 - Date Class with I/O
// File Name: Date.cpp
// Desc: 

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
    stringstream stream;

    stream << setw(10) << MONTHS[getMonth() - 1];
    stream << setw(3) << getDay();
    stream << setw(5) << getYear();

    return stream.str();
}
// Compares two dates, returns true if first date is earlier
static bool compare(const Date d1, const Date d2) {

}