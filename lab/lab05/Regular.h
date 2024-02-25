// Name: Janaki Bhosale
// Date: 3/1/24
// CPSC 1021
// Lab 5: Parking Permits
// File: Regular.h
//Desc: Header file containing Student class, including atrributes and methods

#ifndef REGULAR_H
#define REGULAR_H

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

  #endif // Regular.h
