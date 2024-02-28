// Vehicles.h

#ifndef VEHICLES_H
#define VEHICLES_H

#include <string>

using namespace std;


// Name: Janaki Bhosale
// Date: 3/1/24
// CPSC 1021
// Lab 5: Parking Permits
// File: Vehicles.h
//Desc: Header file containing Student class, including atrributes and methods

class Regular {
    private:
        string make;
        string model;
        int year;
        string color;
        string licensePlate;
    public: 
        // Constructors
        Regular(): make(""), model(""), color(""), licensePlate(""), year(0) { }
        Regular(string m, string o, string c, string p, int y): make(m), model(o), year(y), color(c), licensePlate(p) { } // constructor for all attributes

        // Input Validation Methods
        bool validateInput(string v);
        bool validateInput(int v);

        // Mutators
        bool setMake(string m);
        bool setModel(string o);
        bool setYear(int y);
        bool setColor(string c);
        bool setLicensePlate(string p);

        // Accessors
        string getMake();
        string getModel();
        int getYear();
        string getColor();
        string getLicensePlate();
};


// Name: Dylan Harvey
// Date: 03/01/2024
// Class: CPSC 1021
// Lab Name: Lab05 - Parking Permits
// File Name: Vehicles.h
// Desc: Headerfile for Motorcycle Class (Type of vehicle), defines methods

class Motorcycle
{
private:
    string make;
    string model;
    int year;
    int cc;
    int capacity;
public:
    // Constructors
    Motorcycle(): make(""), model(""), year(0), cc(0), capacity(0) { } // Default constructor
    Motorcycle(string m, string o, int y, int c, int p): make(m), model(o), year(y), cc(c), capacity(p) { } // Constructor for all values given

    // Input Validation Methods
    bool validateInput(string v);
    bool validateInput(int v);

    // Mutators (Setters)
    bool setMake(string m);
    bool setModel(string o);
    bool setYear(int y);
    bool setCC(int c);
    bool setCapacity(int p);

    // Accessors (Getters)
    string getMake();
    string getModel();
    int getYear();
    int getCC();
    int getCapacity();
};


//Name: Angie Diaz
//Date: 3/1/24
//CPSC 1021
//Lab 5: Parking Permits
//File: Vehicles.h
//Desc: Header file containing LowEmission class atrributes and methods

class LowEmission 
{
private:
	string make;
	string model;
    int year;
	int weight;
	int mpg;
public: 
	// Constructors
	LowEmission(): make(""), model(""), weight(0), mpg(0), year(0) { }
	LowEmission(string m, string o, int y, int w, int p): make(m), model(o), year(y), weight(w), mpg(p) { } // constructor for all attributes

	// Input Validation Methods
	bool validateInput(string v);
	bool validateInput(int v);

	// Mutators
	bool setMake(string m);
	bool setModel(string o);
	bool setYear(int y);
	bool setWeight(int w);
	bool setMPG(int m);

	// Accessors
	string getMake();
	string getModel();
    int getYear();
	int getWeight();
	int getMPG();
};

#endif // VEHICLES_H