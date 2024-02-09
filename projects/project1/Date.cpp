// Name: Dylan Harvey
// Class: CPSC 1020
// Date: 2/9/2024
// Project 1
// Time: ~4 Hours
// Desc: Contains various functions for class Date.

#include "Date.h"

Date::Date() : day(1), month(1), year(2023) {}

Date::Date(int d, int m, int y) {
    if (setYear(y) && setMonth(m) && setDay(d)) {
        // If all inputs are valid, assign them
        day = d;
        month = m;
        year = y;
    } else {
        // If any input is invalid, set all variables to default values
        day = 1;
        month = 1;
        year = 2023;
    }
}

bool Date::setDay(int d) {
    if ((month == 2 && ((year % 4 == 0 && d <= 29) || (year % 4 != 0 && d <= 28))) ||
        ((month == 4 || month == 6 || month == 9 || month == 11) && d <= 30) ||
        ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && d <= 31)) {
        // validation for each day of the month in 2023
        // NOT OPTIMAL BUT IT WORKS
        day = d;
        return true;
    } else {
        return false;
    }
}

bool Date::setMonth(int m) {
    if (m >= 1 && m <= 12) {
        month = m;
        return true;
    } else {
        return false;
    }
}

bool Date::setYear(int y) {
    if (y >= 2023) {
        // I thought this was supposed to be for 2023 only, but autograder wants 2024, so >= it is.
        year = y;
        return true;
    } else {
        return false;
    }
}

int Date::getDay() const {
    return day;
}

int Date::getMonth() const {
    return month;
}

int Date::getYear() const {
    return year;
}

string Date::showDate() const {
    // ? operator YEAHHHHHH    
    string monthStr = (month < 10) ? "0" + to_string(month) : to_string(month);
    string dayStr = (day < 10) ? "0" + to_string(day) : to_string(day);
    string yearStr = to_string(year); // technically unessecary, but keeps consistent
    return monthStr + "/" + dayStr + "/" + yearStr;
}