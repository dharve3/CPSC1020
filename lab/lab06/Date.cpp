// Name: Dylan Harvey
// Date: 3/8/2024
// Class: CPSC 1021
// Lab Name: Lab06 - Date Class with I/O
// File Name: Date.cpp
// Desc: 

#include "Date.h"

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

string Date::print() {
    
}
static bool compare(const Date d1, const Date d2) {

}