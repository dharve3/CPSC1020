// Name: Dylan Harvey
// Date: 03/01/2024
// Class: CPSC 1021
// Lab Name: Lab05 - Parking Permits
// File Name: Motorcycles.h
// Desc: Headerfile for Motorcycles Class (Type of vehicle), defines methods

#ifndef MOTORCYCLES_H
#define MOTORCYCLES_H

#include <string>

using namespace std;

class Motorcycles
{
private:
    string make;
    string model;
    int cc;
    int capacity;
    int year;
public:
    // Constructors
    Motorcycles(): make(""), model(""), cc(0), capacity(0), year(0) { } // Default constructor
    Motorcycles(string m, string o, int c, int p, int y): make(m), model(o), cc(c), capacity(p), year(y) { } // Constructor for all values given

    // Input Validation Methods
    bool validateInput(string v);
    bool validateInput(int v);

    // Mutators (Setters)
    bool setMake(string m);
    bool setModel(string o);
    bool setCC(int c);
    bool setCapacity(int p);
    bool setYear(int y);

    // Accessors (Getters)
    string getMake();
    string getModel();
    string getColor();
    int getYear();

}

#endif // MOTORCYCLES_H