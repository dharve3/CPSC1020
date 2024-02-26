// Name: Janaki Bhosale
// Date: 3/1/24
// CPSC 1021
// Lab 5: Parking Permits
// File: Regular.h
//Desc: Header file containing Student class, including atrributes and methods

#ifndef VEHICLES_H
#define VEHICLES_H

#include <string>

using namespace std;

class Regular {
    private:
        string make;
        string model;
        string color;
        string licensePlate;
        int year;
    public: 
        // Constructors
        Regular(): make(""), model(""), color(""), licensePlate(""), year(0) {}
        Regular(string m, string o, string c, string p, int y): make{m}, model{o}, color{c}, licensePlate{p}, year{y} {} // constructor for all attributes

        // Input Validation Methods
        bool validateInput(string v);
        bool validateInput(int v);

        // Mutators
        bool setMake(string m);
        bool setModel(string o);
        bool setColor(string c);
        bool setLicensePlate(string p);
        bool setYear(int y);

        // Accessors
        string getMake();
        string getModel();
        int getColor();
        int getLicensePlate();
        int getYear();
  };

//Name: Angie Diaz
//Date: 3/1/24
//CPSC 1021
//Lab 5: Parking Permits
//File: LowEmissions.h
//Desc: Header file containing LowEmissions class atrributes and methods

class LowEmissions 
{
private:
	string make;
	string model;
	int weight;
	int mpg;
	int year;
public: 
	// Constructors
	LowEmissions(): make(""), model(""), weight(0), mpg(0), year(0) {}
	LowEmissions(string m, string o, int w, int p, int y): make{m}, model{o}, weight{w}, mpg{p}, year{y} {} // constructor for all attributes

	// Input Validation Methods
	bool validateInput(string v);
	bool validateInput(int v);

	// Mutators
	bool setMake(string m);
	bool setModel(string o);
	bool setWeight(int w);
	bool setMPG(int m);
	bool setYear(int y);

	// Accessors
	string getMake();
	string getModel();
	int getWeight();
	int getMPG();
	int getYear();
};

// Name: Dylan Harvey
// Date: 03/01/2024
// Class: CPSC 1021
// Lab Name: Lab05 - Parking Permits
// File Name: Motorcycles.h
// Desc: Headerfile for Motorcycles Class (Type of vehicle), defines methods

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
    int getCC();
    int getCapacity();
    int getYear();

};

#endif // VEHICLES_H
