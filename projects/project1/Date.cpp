// My Name: Dylan Harvey
// My Class: CPSC 1020
// Date: 2/7/2024
// Desc: 
// Time: 

#include "Date.h"

Date::Date() {
    day = 1;
    month = 1;
    year = 2023;
}

Date::Date(int d, int m, int y) {
    day = d;
    month = m;
    year = y;
}

bool Date::setDay(int d) {
    day = d;
    // Add input validation
    return 1;
}

bool Date::setMonth(int m) {
    month = m;
    // Add input validation
    return 1;
}

bool Date::setYear(int y) {
    year = y;
    // Add input validation
    return 1;
}

int Date::getDay() {
    return day;
}

int Date::getMonth() {
    return month;
}

int Date::getYear() {
    return year;
}

string Date::showDate() {
    // format return as MM/DD/YYYY
}