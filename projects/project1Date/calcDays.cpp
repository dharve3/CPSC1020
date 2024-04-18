// Name: Dylan Harvey
// Class: CPSC 1020
// Date: 2/9/2024
// Project 1
// Time: ~4 Hours
// Desc: Calculates the differnece between 2 dates.

#include "calcDays.h"

int calcDays(const Date& date1, const Date& date2) {
    // Number of days from 01/01/2023 to date1
    int daysDiff1 = daysSinceFirst(date1);

    // Number of days from 01/01/2023 to date2
    int daysDiff2 = daysSinceFirst(date2);

    // Calculate the difference between the two dates
    return abs(daysDiff2 - daysDiff1);
    // Absolute value to prevent -days
}

int daysSinceFirst(const Date& date) {
    // Number of days from 01/01/2023
    int daysSince = (date.getYear() - 2023) * 365 + date.getMonth() * 30 + date.getDay();
    return daysSince;
}