#ifndef DATE_H
#define DATE_H

// Include statements
#include <iomanip>

// Class Declaration
class Date 
{
private:
    int day;
    int month;
    int year;
public:
    Date();
    Date(int, int, int);
    bool setDay(int);
    bool setMonth(int);
    bool setYear(int);
    int getDay();
    int getMonth();
    int getYear();
    string showDate();
};

#endif