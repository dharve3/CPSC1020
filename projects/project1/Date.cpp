// My Name: Dylan Harvey
// My Class: CPSC 1020
// Date: 2/7/2024
// Desc: 
// Time: 

#include "Date.h"

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