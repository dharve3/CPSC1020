// Customers.h

#ifndef CUSTOMERS_H
#define CUSTOMERS_H

#include <string>

using namespace std;


// Name: Dylan Harvey
// Date: 03/01/2024
// Class: CPSC 1021
// Lab Name: Lab05 - Parking Permits
// File Name: Customers.h
// Desc: Headerfile for Visitors Class (Type of customer), defines methods

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
    bool setRegNumber(int rN);
    bool setFirstVisit(bool fV);

    // Accessors (Getters)
    string getName();
    string getEmail();
    string getAddress();
    int getRegNumber();
    bool getFirstVisit();
};


// Name: Janaki Bhosale
// Date: 3/1/24
// CPSC 1021
// Lab 5: Parking Permits
// File: Customers.h
// Desc: Header file containing Student class, including atrributes and methods

class Students {
    private:
        string name;
        string email;
        string address;
        int studentID;
        int educationLevel;
    public:
        // constructors
        Students(): name(""), email(""), address(""), studentID(0), educationLevel(0) {}
        Students(string n, string e, string a, int sID, int l): name(n), email(e), address(a), studentID(sID), eductionLevel(l) {}

        // Input Validation Methods
        bool validateInput(string v);
	      bool validateInput(int v);

	      // Mutators
	      bool setName(string n)
	      bool setEmail(string e);
	      bool setAddress(string a);
	      bool setStudentID(int sID);
	      bool setEducationLevel(int l);

	      // Accessors
	      string getName();
	      string getEmail();
	      string getAddress();
	      int getstudentID();
	      int getEducationLevel();
};


//Name: Angie Diaz
//Date: 3/1/24
//CPSC 1021
//Lab 5: Parking Permits
//File: Customers.h
//Desc: Header file containing Employee class atrributes and methods

class Employees 
{
private:
	string name;
	string email;
	string address;
	int employeeID;
	int yearsEmployed;
public:
	// Constructors
	Employees(): name(""), email(""), address(""), employeeID(0), yearsEmployed(0) {}
	Employees(string n, string e, string a, int eID, int yE): name(n), email(e), address(a), employeeID(eID), yearsEmployed(yE) {} // constructor for all attributes

	// Input Validation Methods
	bool validateInput(string v);
	bool validateInput(int v);

	// Mutators
	bool setName(string n)
	bool setEmail(string e);
	bool setAddress(string a);
	bool setEmployeeID(int d);
	bool setYearsEmployed(int y);

	// Accessors
	string getName();
	string getEmail();
	string getAddress();
	int getEmployeeID();
	int getYearsEmployed();
};


#endif // CUSTOMERS_H