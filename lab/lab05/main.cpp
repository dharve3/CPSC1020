// Name: Dylan Harvey
// Date: 03/01/2024
// Class: CPSC 1021
// Lab Name: Lab05 - Parking Permits
// File Name: main.cpp
// Desc: 

#include "Customers.h"
#include "Vehicles.h"
#include "Invoice.h"

int main() {
    string customerType, vehicleType, permitType, name, email, address, make, model, input;
    int year;
    double discount = 0;
    double serviceFee = 25.0;
    double permitPrice = 5.0;
    
    // Get customer type from user
    cout << "What type of customer are you? (visitor, student, or employee?): ";
    cin >> customerType;
    // Loop until valid input is recieved
    while (customerType != "visitor" || customerType != "student" || customerType != "employee") {
        cout << "Please try again (input is case sensitive): ";
        cin >> customerType;
    }

    if (customerType == "visitor") {
        // Visitor specific vars
        int regNum;
        bool firstVisit;

        // Get input from user
        cout << "Enter your name: ";
        cin >> name;
        cout << "Enter your email: ";
        cin >> email;
        cout << "Enter your address: ";
        cin >> address;
        cout << "Enter your registration number: ";
        cin >> regNum;
        cout << "Is this your first visit? (y/n): ";
        cin >> input;
        // Logic for first visit
        if (input == "y") {
            firstVisit = 1;
        } else {
            firstVisit = 0;
        }

        // Create Visitor object
        Visitor visitor1(name, email, address, regNum, firstVisit);
    } else if (customerType == "student") {
        // Student specific vars
        int studentId, educationLevel;

        // Get input from user
        cout << "Enter your name: ";
        cin >> name;
        cout << "Enter your email: ";
        cin >> email;
        cout << "Enter your address: ";
        cin >> address;
        cout << "Enter your studentID: ";
        cin >> studentId;
        cout << "Enter your education level (years): ";
        cin >> educationLevel;

        // Create Student object
        Student student1(name, email, address, studentId, educationLevel);
    } else if (customerType == "employee") {
        // Employee specific vars
        int employeeId, yearsEmployed;

        // Get input from user
        cout << "Enter your name: ";
        cin >> name;
        cout << "Enter your email: ";
        cin >> email;
        cout << "Enter your address: ";
        cin >> address;
        cout << "Enter your employeeID: ";
        cin >> employeeId;
        cout << "Enter your years employed: ";
        cin >> yearsEmployed;

        // Create Employee object
        Employee employee1(name, email, address, employeeId, yearsEmployed);
    }


    // Get Vehicle type from user
    cout << "What is your vehicle type? (regular, motorcycle, or lowEmssion?): ";
    cin >> vehicleType;
    // Loop until valid input is recieved
    while (vehicleType != "regular" || vehicleType != "motorcycle" || vehicleType != "lowEmission") {
        cout << "Please try again (input is case sensitive): ";
        cin >> vehicleType;
    }

    if (vehicleType == "regular") {
        // Regular specific vars
        string color, licensePlate;

        // Get input from user
        cout << "Enter vehicle make: ";
        cin >> make;
        cout << "Enter vehicle model: ";
        cin >> model;
        cout << "Enter vehicle year: ";
        cin >> year;
        cout << "Enter vehicle color: ";
        cin >> color;
        cout << "Enter license plate: ";
        cin >> licensePlate;
        
        // Create Regular object
        Regular regular1(make, model, year, color, licensePlate);
    } else if (vehicleType == "motorcycle") {
        // Motorcycle specific vars
        int cc, capacity;

        // Get input from user
        cout << "Enter vehicle make: ";
        cin >> make;
        cout << "Enter vehicle model: ";
        cin >> model;
        cout << "Enter vehicle year: ";
        cin >> year;
        cout << "Enter CCs: ";
        cin >> cc;
        cout << "Enter capacity: ";
        cin >> capacity;

        // Create Motorcycle Object
        Motorcycle motorcycle1(make, model, year, cc, capacity);
    } else if (vehicleType == "lowEmission") {
        // Low Emission specific vars
        int mpg, weight;

        // Get input from user
        cout << "Enter vehicle make: ";
        cin >> make;
        cout << "Enter vehicle model: ";
        cin >> model;
        cout << "Enter vehicle year: ";
        cin >> year;
        cout << "Enter MPG: ";
        cin >> mpg;
        cout << "Enter weight in pounds: ";
        cin >> weight;

        // Create LowEmission object
        LowEmission lowEmission1(make, model, year, mpg, weight);
    }


    // Get Permit type from user
    cout << "What type of permit would you like to purchase? (annual, semester, or one-day?): ";
    cin >> permitType;
    // Loop until valid input is recieved
    while (permitType != "annual" || permitType != "semester" || permitType != "one-day") {
        cout << "Please try again (input is case sensitive): ";
        cin >> permitType;
    }

    if (permitType == "annual") {
        permitPrice *= 100; // Multiply price by days in academic year (roughly)

        // Create Invoice object for annual permit
        Invoice annual(permitPrice, serviceFee, discount);
    } else if (permitType == "semester") {
        permitPrice *= 50; // Multiply price by days in academic semester (roughly)

        // Create Invoice object for semester permit
        Invoice semester(permitPrice, serviceFee, discount);
    } else if (permitType == "one-day") {
        // Create Invoice object for one-day permit
        Invoice oneDay(permitPrice, serviceFee, discount);
    }

    return 0;
}