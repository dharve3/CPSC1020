// My Name: Dylan Harvey
// My Class: CPSC 1020
// Date: 2/7/2024
// Desc: 
// Time: 

#include "calcDays.h"

int calcDays(const Date& date1, const Date& date2) {
    // Number of days from 01/01/2023 to date1
    int daysDiff1 = (date1.getYear() - 2023) * 365 + date1.getMonth() * 30 + date1.getDay();

    // Number of days from 01/01/2023 to date2
    int daysDiff2 = (date2.getYear() - 2023) * 365 + date2.getMonth() * 30 + date2.getDay();

    // Calculate the difference between the two dates
    return daysDiff2 - daysDiff1;
}