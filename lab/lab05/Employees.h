//Name: Angie Diaz
//Date: 3/1/24
//CPSC 1021
//Lab 5: Parking Permits
//File: Employees.h
//Desc: Header file containing Employee class atrributes and methods


#ifndef EMPLOYEES_H
#define EMPLOYEES_H

#include <string>

using namespace std;

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

#endif // EMPLOYEES_H