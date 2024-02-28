// Name: Dylan Harvey
// Date: 03/01/2024
// Class: CPSC 1021
// Lab Name: Lab05 - Parking Permits
// File Name: main.cpp
// Desc: 

#include <iostream>
#include <iomanip>

#include "Customers.h"
#include "Vehicles.h"
#include "Invoice.h"

int main() {
    string customerType, vehicleType, permitType, name, email, address, make, model, input;
    int year;
    double discount = 0.00;
    double serviceFee = 2.50;
    double permitPrice = 5.00;

    // Class declarations to avoid scope issues.
    // Customer classes
    Visitor visitor1;
    Student student1;
    Employee employee1;
    // Vehicle classes
    Regular regular1;
    Motorcycle motorcycle1;
    LowEmission lowEmission1;

    // Number Formatting
    cout << fixed << setprecision(2);
    
    // Get customer type from user
    cout << "What type of customer are you? (visitor, student, or employee?): ";
    getline(cin, customerType);
    // Loop until valid input is recieved
    while (customerType != "visitor" && customerType != "student" && customerType != "employee") {
        cout << "Please try again (input is case sensitive): ";
        getline(cin, customerType);
    }

    if (customerType == "visitor") {
        // Visitor specific vars
        int regNum;
        bool firstVisit;

        // Get input from user
        cout << "Enter your name: ";
        getline(cin, name);
        cout << "Enter your email: ";
        getline(cin, email);
        cout << "Enter your address: ";
        getline(cin, address);
        cout << "Enter your registration number: ";
        getline(cin, input);
        stringstream(input) >> regNum;
        cout << "Is this your first visit? (y/n): ";
        getline(cin, input);
        // Logic for first visit
        if (input == "y") {
            firstVisit = 1;
            discount = 2.50;
        } else {
            firstVisit = 0;
        }

        // Create Visitor object
        visitor1 = Visitor(name, email, address, regNum, firstVisit);
    } else if (customerType == "student") {
        // Student specific vars
        int studentId, educationLevel;

        // Get input from user
        cout << "Enter your name: ";
        getline(cin, name);
        cout << "Enter your email: ";
        getline(cin, email);
        cout << "Enter your address: ";
        getline(cin, address);
        cout << "Enter your studentID #: ";
        getline(cin, input);
        stringstream(input) >> studentId;
        cout << "Enter your education level (years 1-4 etc.): ";
        getline(cin, input);
        stringstream(input) >> educationLevel;

        // Create Student object
        student1 = Student(name, email, address, studentId, educationLevel);
    } else if (customerType == "employee") {
        // Employee specific vars
        int employeeId, yearsEmployed;

        // Get input from user
        cout << "Enter your name: ";
        getline(cin, name);
        cout << "Enter your email: ";
        getline(cin, email);
        cout << "Enter your address: ";
        getline(cin, address);
        cout << "Enter your employeeID: ";
        getline(cin, input);
        stringstream(input) >> employeeId;
        cout << "Enter your years employed: ";
        getline(cin, input);
        stringstream(input) >> yearsEmployed;

        // Create Employee object
        employee1 = Employee(name, email, address, employeeId, yearsEmployed);
    }


    // Get Vehicle type from user
    cout << "What is your vehicle type? (regular, motorcycle, or lowEmssion?): ";
    getline(cin, vehicleType);
    // Loop until valid input is recieved
    while (vehicleType != "regular" && vehicleType != "motorcycle" && vehicleType != "lowEmission") {
        cout << "Please try again (input is case sensitive): ";
        getline(cin, vehicleType);
    }

    if (vehicleType == "regular") {
        // Regular specific vars
        string color, licensePlate;

        // Get input from user
        cout << "Enter vehicle make: ";
        getline(cin, make);
        cout << "Enter vehicle model: ";
        getline(cin, model);
        cout << "Enter vehicle year: ";
        getline(cin, input);
        stringstream(input) >> year;
        cout << "Enter vehicle color: ";
        getline(cin, color);
        cout << "Enter license plate: ";
        getline(cin, licensePlate);
        
        // Create Regular object
        regular1 = Regular(make, model, year, color, licensePlate);
    } else if (vehicleType == "motorcycle") {
        // Motorcycle specific vars
        int cc, capacity;

        // Get input from user
        cout << "Enter vehicle make: ";
        getline(cin, make);
        cout << "Enter vehicle model: ";
        getline(cin, model);
        cout << "Enter vehicle year: ";
        getline(cin, input);
        stringstream(input) >> year;
        cout << "Enter CCs: ";
        getline(cin, input);
        stringstream(input) >> cc;
        cout << "Enter capacity: ";
        getline(cin, input);
        stringstream(input) >> capacity;

        // Create Motorcycle Object
        motorcycle1 = Motorcycle(make, model, year, cc, capacity);
    } else if (vehicleType == "lowEmission") {
        // Low Emission specific vars
        int mpg, weight;

        // Get input from user
        cout << "Enter vehicle make: ";
        getline(cin, make);
        cout << "Enter vehicle model: ";
        getline(cin, model);
        cout << "Enter vehicle year: ";
        getline(cin, input);
        stringstream(input) >> year;
        cout << "Enter MPG: ";
        getline(cin, input);
        stringstream(input) >> mpg;
        cout << "Enter weight in pounds: ";
        getline(cin, input);
        stringstream(input) >> weight;

        // Create LowEmission object
        lowEmission1 = LowEmission(make, model, year, mpg, weight);
    }


    // Get Permit type from user
    cout << "What type of permit would you like to purchase? (annual, semester, or one-day?): ";
    getline(cin, permitType);
    // Loop until valid input is recieved
    while (permitType != "annual" && permitType != "semester" && permitType != "one-day") {
        cout << "Please try again (input is case sensitive): ";
        getline(cin, permitType);
    }
    
    // Yes I KNOW this is a lot of hard coded logic but idk how else to determine which objects to pass
    // HOPEFULLY FIX AT SOME POINT CUZ EW
    if (permitType == "annual") {
        permitPrice *= 100; // Multiply price by days in academic year (roughly)

        // Create Invoice object for annual permit
        Invoice annual(permitPrice, serviceFee, discount);

        if (customerType == "visitor") { // Case for visitor
            if (vehicleType == "regular") {
                cout << annual.printInvoice(visitor1, regular1);
            } else if (vehicleType == "motorcycle") {
                cout << annual.printInvoice(visitor1, motorcycle1);
            } else if (vehicleType == "lowEmission") {
                cout << annual.printInvoice(visitor1, lowEmission1);
            }
        } else if (customerType == "student") { // Case for student
            if (vehicleType == "regular") {
                cout << annual.printInvoice(student1, regular1);
            } else if (vehicleType == "motorcycle") {
                cout << annual.printInvoice(student1, motorcycle1);
            } else if (vehicleType == "lowEmission") {
                cout << annual.printInvoice(student1, lowEmission1);
            }
        } else if (customerType == "employee") { // Case for employee
            if (vehicleType == "regular") {
                cout << annual.printInvoice(employee1, regular1);
            } else if (vehicleType == "motorcycle") {
                cout << annual.printInvoice(employee1, motorcycle1);
            } else if (vehicleType == "lowEmission") {
                cout << annual.printInvoice(employee1, lowEmission1);
            }
        }
    } else if (permitType == "semester") {
        permitPrice *= 50; // Multiply price by days in academic semester (roughly)

        // Create Invoice object for semester permit
        Invoice semester(permitPrice, serviceFee, discount);

        if (customerType == "visitor") { // Case for visitor
            if (vehicleType == "regular") {
                cout << semester.printInvoice(visitor1, regular1);
            } else if (vehicleType == "motorcycle") {
                cout << semester.printInvoice(visitor1, motorcycle1);
            } else if (vehicleType == "lowEmission") {
                cout << semester.printInvoice(visitor1, lowEmission1);
            }
        } else if (customerType == "student") { // Case for student
            if (vehicleType == "regular") {
                cout << semester.printInvoice(student1, regular1);
            } else if (vehicleType == "motorcycle") {
                cout << semester.printInvoice(student1, motorcycle1);
            } else if (vehicleType == "lowEmission") {
                cout << semester.printInvoice(student1, lowEmission1);
            }
        } else if (customerType == "employee") { // Case for employee
            if (vehicleType == "regular") {
                cout << semester.printInvoice(employee1, regular1);
            } else if (vehicleType == "motorcycle") {
                cout << semester.printInvoice(employee1, motorcycle1);
            } else if (vehicleType == "lowEmission") {
                cout << semester.printInvoice(employee1, lowEmission1);
            }
        }
    } else if (permitType == "one-day") {
        // Create Invoice object for one-day permit
        Invoice oneDay(permitPrice, serviceFee, discount);

        if (customerType == "visitor") { // Case for visitor
            if (vehicleType == "regular") {
                cout << oneDay.printInvoice(visitor1, regular1);
            } else if (vehicleType == "motorcycle") {
                cout << oneDay.printInvoice(visitor1, motorcycle1);
            } else if (vehicleType == "lowEmission") {
                cout << oneDay.printInvoice(visitor1, lowEmission1);
            }
        } else if (customerType == "student") { // Case for student
            if (vehicleType == "regular") {
                cout << oneDay.printInvoice(student1, regular1);
            } else if (vehicleType == "motorcycle") {
                cout << oneDay.printInvoice(student1, motorcycle1);
            } else if (vehicleType == "lowEmission") {
                cout << oneDay.printInvoice(student1, lowEmission1);
            }
        } else if (customerType == "employee") { // Case for employee
            if (vehicleType == "regular") {
                cout << oneDay.printInvoice(employee1, regular1);
            } else if (vehicleType == "motorcycle") {
                cout << oneDay.printInvoice(employee1, motorcycle1);
            } else if (vehicleType == "lowEmission") {
                cout << oneDay.printInvoice(employee1, lowEmission1);
            }
        }
    }

    return 0;
}