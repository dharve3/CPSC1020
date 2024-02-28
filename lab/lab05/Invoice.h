// Name: Dylan Harvey
// Date: 03/01/2024
// Class: CPSC 1021
// Lab Name: Lab05 - Parking Permits
// File Name: Invoice.h
// Desc: Headerfile for Invoice Class, defines methods

#ifndef INVOICE_H
#define INVOICE_H

#include <iostream>
#include <iomanip>
#include <string>
#include <sstream> // Stringstream for printInvoice

#include "Customers.h"
#include "Vehicles.h"

class Invoice
{
private:
    double permitPrice;
    double serviceCharge;
    double discount;

public:
    // Constructors
    Invoice(): permitPrice(0.0), serviceCharge(0.0), discount(0.0) { }; // Default constructor
    Invoice(double p, double s, double d): permitPrice(p), serviceCharge(s), discount(d) { } // Constructor for all provided values

    // Input Validation Methods
    bool validateInput(double v);

    // Mutators (Setters)
    bool setPermitPrice(double p);
    bool setServiceCharge(double s);
    bool setDiscount(double d);

    // Accessors (Getters)
    double getPermitPrice() const;
    double getServiceCharge() const;
    double getDiscount() const;

    // Calculates the total cost of the permit
    double calcTotal() const;

    // Generate the invoice for any combination of customer and vehicle
    // Returns a string of the invoice using the provided data
    // Uses polymorphism and templates (template functions r pretty neat)
    // NOTE: Template function is implemented in the headerfile to avoind linker errors.
    template<typename CustomerT, typename VehicleT>
    string printInvoice(const CustomerT& customer, const VehicleT& vehicle) const {
        stringstream invoiceDetails;
        // Using stringstream for readability and helps with 
        // not having to to_string() every non str value

        // Number formatting and newline
        invoiceDetails << fixed << setprecision(2) << "\n";
        // Customer information
        invoiceDetails << "Customer Information:\n";
        invoiceDetails << "Name: " << customer.getName() << "\n";
        invoiceDetails << "Email: " << customer.getEmail() << "\n";
        invoiceDetails << "Address: " << customer.getAddress() << "\n";

        // As much as it pains me to hard-code this logic, 
        // I couldn't think of a better way to do this here

        // Depending on the type of customer, access additonal attributes
        // constexpr is REQUIRED so it evaluates expression at compile time, or else will throw errors for missing functions
        if constexpr (is_same<CustomerT, Visitor>::value) {
            invoiceDetails << "Registration Number: " << customer.getRegNumber() << "\n";
            invoiceDetails << "First Visit: " << (customer.getFirstVisit() ? "Yes" : "No") << "\n";
        } else if constexpr (is_same<CustomerT, Student>::value) {
            invoiceDetails << "Student ID: " << customer.getStudentID() << "\n";
            invoiceDetails << "Education Level: " << customer.getEducationLevel() << "\n";
        } else if constexpr (is_same<CustomerT, Employee>::value) {
            invoiceDetails << "Employee ID: " << customer.getEmployeeID() << "\n";
            invoiceDetails << "Years Employed: " << customer.getYearsEmployed() << "\n";
        } else {
            invoiceDetails << "Error getting customer specific information.\n";
        }
        invoiceDetails << "\n";

        // Vehicle Information
        invoiceDetails << "Vehicle Information:\n";
        invoiceDetails << "Make: " << vehicle.getMake() << "\n";
        invoiceDetails << "Model: " << vehicle.getModel() << "\n";
        invoiceDetails << "Year: " << vehicle.getYear() << "\n";

        // Depending on the type of vehicle, access additonal attributes
        if constexpr (is_same<VehicleT, Regular>::value) {
            invoiceDetails << "Color: " << vehicle.getColor() << "\n";
            invoiceDetails << "License Plate: " << vehicle.getLicensePlate() << "\n";
        } else if constexpr (is_same<VehicleT, Motorcycle>::value) {
            invoiceDetails << "CCs: " << vehicle.getCC() << "\n";
            invoiceDetails << "Capacity: " << vehicle.getCapacity() << "\n";
        } else if constexpr (is_same<VehicleT, LowEmission>::value) {
            invoiceDetails << "Weight: " << vehicle.getWeight() << "\n";
            invoiceDetails << "MPG: " << vehicle.getMPG() << "\n";
        } else {
            invoiceDetails << "Error getting vehicle specific information.\n";
        }
        invoiceDetails << "\n";

        // Price Details
        invoiceDetails << "Price Details:\n";
        invoiceDetails << "Permit Price: $" << permitPrice << "\n";
        invoiceDetails << "Service Charge: $" << serviceCharge << "\n";
        invoiceDetails << "Discount: $" << discount << "\n";
        invoiceDetails << "Total: $" << calcTotal() << "\n";
        invoiceDetails << "\n"; // Extra newline

        return invoiceDetails.str();
    }
};

#endif // INVOICE_H