// Name: Janaki Bhosale
// Date: 3/1/24
// CPSC 1021
// Lab 5: Parking Permits
// File: Students.h
// Desc: Header file containing Student class, including atrributes and methods

#ifndef STUDENTS_H
#define STUDENTS_H

#include <string>

using namespace std;

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

}

#endif // STUDENTS_H
