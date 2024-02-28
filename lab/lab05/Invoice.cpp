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