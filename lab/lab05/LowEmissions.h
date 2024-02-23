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

class LowEmissions {
	private:
		string make{""};
		string model{""};
		int weight{""};
		int mpg{0};
		int year{0};
	public: 
		//constructors
		LowEmissions();
		LowEmissions(string m, string o, int w, int p, int y) : make{m}, model{o}, weight{w}, mpg{p}, year{y}
		// Input Validation Methods
   		bool validateInput(string v);
    		bool validateInput(int v);
		//mutators
		bool setMake(string m);
    		bool setModel(string o);
		bool setWeight(int w);
		bool setMPG(int m);
		bool setYear(int y);
		//accessors
		string getMake();
    		string getModel();
    		int getWeight();
    		int getMPG();
    		int getYear();
};
#endif

