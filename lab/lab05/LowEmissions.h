//Name: Angie Diaz
//Date: 3/1/24
//CPSC 1021
//Lab 5: Parking Permits
//File: LowEmissions.h
//Desc: Header file containing LowEmissions class atrributes and methods

#ifndef LOWEMISSIONS_H
#define LOWEMISSIONS_H

#include <string>

using namespace std;

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

#endif // LOWEMISSIONS_H