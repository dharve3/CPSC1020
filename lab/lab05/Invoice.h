// Name: Dylan Harvey
// Date: 03/01/2024
// Class: CPSC 1021
// Lab Name: Lab05 - Parking Permits
// File Name: Invoice.h
// Desc: Headerfile for Invoice Class, defines methods

#ifndef INVOICE_H
#define INVOICE_H

#include <string>
#include <iostream>
#include <sstream> // Stringstream for printInvoice
// Customers:
#include "Visitors.h"
#include "Students.h"
#include "Employees.h"
// Vehicles:
#include "Regular.h"
#include "Motorcycles.h"
#include "LowEmissions.h"

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
    double getPermitPrice();
    double getServiceCharge();
    double getDiscount();

    // Calculates the total cost of the permit
    double calcTotal() const;

    // Generate the invoice for any combination of customer and vehicle
    // Uses polymorphism and templates (template functions r pretty neat)
    template<typename CustomerType, typename VehicleType>
    string printInvoice(const CustomerType& customer, const VehicleType& vehicle) const;
}

#endif // INVOICE_H