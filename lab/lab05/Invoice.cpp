// Name: Dylan Harvey
// Date: 03/01/2024
// Class: CPSC 1021
// Lab Name: Lab05 - Parking Permits
// File Name: Invoice.cpp
// Desc: Source file for Invoice Class, declares methods

#include "Invoice.h"

// Validates that input is greater than or equal to 0 for int type
bool Invoice::validateInput(double v) {
    if (v < 0)
        return 0;
    else
        return 1;
}

// Mutators (Setters)
bool Invoice::setPermitPrice(double p) {
    if (validateInput(p)) {
        permitPrice = p;
        return 1;
    } else {
        return 0;
    }
}
bool Invoice::setServiceCharge(double s) {
    if (validateInput(s)) {
        serviceCharge = s;
        return 1;
    } else {
        return 0;
    }
}
bool Invoice::setDiscount(double d) {
    if (validateInput(d)) {
        discount = d;
        return 1;
    } else {
        return 0;
    }
}

// Accessors (Getters)
double Invoice::getPermitPrice() {
    return permitPrice;
}
double Invoice::getServiceCharge() {
    return serviceCharge;
}
double Invoice::getDiscount() {
    return discount;
}

// Calculates the total price of the permit using class variables
double Invoice::calcTotal() const {
    return (permitPrice + serviceCharge - discount);
}

// Returns a string of the invoice using the provided data
// Uses polymorphism and templates (template functions r pretty neat)
template<typename CustomerType, typename VehicleType>
string Invoice::printInvoice(const CustomerType& customer, const VehicleType& vehicle) const {
    stringstream invoiceDetails;
    // Using stringstream for readability and helps with 
    // not having to to_string() every non str value

    // Customer information
    invoiceDetails << "Customer Information:\n";
    invoiceDetails << "Name: " << customer.getName() << "\n";
    invoiceDetails << "Email: " << customer.getEmail() << "\n";
    invoiceDetails << "Address: " << customer.getAddress() << "\n";

    // As much as it pains me to hard-code this logic, 
    // I couldn't think of a better way to do this here

    // Depending on the type of customer, access additonal attributes
    if (is_same<CustomerType, Visitors>::value) {
        invoiceDetails << "Registration Number: " << customer.getRegNumber() << "\n";
        invoiceDetails << "First Visit: " << (customer.getFirstVisit() ? "Yes" : "No") << "\n";
    } else if (is_same<CustomerType, Students>::value) {
        invoiceDetails << "Student ID: " << customer.getStudentID() << "\n";
        invoiceDetails << "Education Level: " << customer.getLevel() << "\n";
    } else if (is_same<CustomerType, Employees>::value) {
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
    if (is_same<VehicleType, Regular>::value) {
        invoiceDetails << "Color: " << vehicle.getColor() << "\n";
        invoiceDetails << "License Plate: " << vehicle.getLicensePlate() << "\n";
    } else if (is_same<CustomerType, Motorcycles>::value) {
        invoiceDetails << "CCs: " << vehicle.getCC() << "\n";
        invoiceDetails << "Capacity: " << vehicle.getCapacity() << "\n";
    } else if (is_same<VehicleType, LowEmissions>::value) {
        invoiceDetails << "" << vehicle.getWeight() << "\n";
        invoiceDetails << "" << vehicle.getMPG() << "\n";
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

    return invoiceDetails.str();
}