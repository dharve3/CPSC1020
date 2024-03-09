#include "Length.h" 
 
//*************************************
// Overloaded operator +              *
//************************************* 
Length operator+(Length a, Length b)
{
    return Length(a.len_inches + b.len_inches);
}

//*************************************
// Overloaded  operator -             *
//*************************************
Length operator-(Length a, Length b)
{
    return Length(a.len_inches - b.len_inches);
}

//************************************
// Overloaded operator ==            *
//************************************
bool operator==(Length a, Length b)
{
    return a.len_inches == b.len_inches;
}

//************************************
// Overloaded operator <             *
//************************************
bool operator<(Length a, Length b)
{
    return a.len_inches < b.len_inches;
}

//************************************
// Overloaded operator <<            *
//************************************
ostream& operator<<(ostream &os, const Length &l)
{
    os << l.getFeet() << "feet, " << l.getInches() << " inches.";
    return os;
}

//************************************
// Overloaded operator >>            *
//************************************
istream& operator>>(istream &is, Length &l)
{
    int feet, inches;
    cout << "Enter feet: ";
    is >> feet;
    cout << "Enter inches: ";
    is >> inches;
    l.setLength(feet, inches);
    return is;
}

//************************************
// Overloaded operator |             *
//************************************
Length operator| (Length a)
{
    double cm;
    cout << "Enter centimeters: ";
    cin >> cm;
    int total_inches = static_cast<int>(cm / 2.54); // 1 in = 2.54 cm
    return Length(total_inches / 12, total_inches % 12);
}