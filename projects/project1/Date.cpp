// My Name: Dylan Harvey
// My Class: CPSC 1020
// Date: 2/7/2024
// Desc: 
// Time: 

#include "Date.h"

Date::Date() : day(1), month(1), year(2023) {}

Date::Date(int d, int m, int y) {
    if (!setYear(y) || !setMonth(m) || !setDay(d)) {
        // If any input is invalid, set all variables to default values
        day = 1;
        month = 1;
        year = 2023;
    }
}

bool Date::setDay(int d) {
    if (d >= 1 && d <= 31) {
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
    if (y >= 2023 && y <= 2023) {
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
    return to_string(month) + "/" + to_string(day) + "/" + to_string(year);
}