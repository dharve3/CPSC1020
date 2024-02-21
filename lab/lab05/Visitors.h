// Name: Dylan Harvey
// Date: 03/01/2024
// Class: CPSC 1021
// Lab Name: Lab05 - Parking Permits
// File Name: Visitors.h
// Desc: Headerfile for Visitors Class (Type of customer), defines methods

#ifndef VISITORS_H
#define VISITORS_H

#include <string>

using namespace std;

class Visitors 
{
private:
    string name;
    string email;
    string address;
    int regNumber;
    bool firstVisit;
public:
    // Constructors
    Visitors(): name(""), email(""), address(""), regNumber(0), firstVisit(0) { } // Default constructor
    Visitors(string n, string e, string a, int rN, bool fV): name(n), email(e), address(a), regNumber(rN), firstVisit(fV) { } // Constructor for all values given

    // Input Validation Methods
    bool validateInput(string v);
    bool validateInput(int v);

    // Mutators (Setters)
    bool setName(string n);
    bool setEmail(string e);
    bool setAddress(string a);
    bool setregNumber(int rN);
    bool setFirstVisit(bool fV);

    // Accessors (Getters)
    string getName();
    string getEmail();
    string getAddress();
    int getregNumber();
    bool getFirstVisit();

}

#endif // VISITORS_H