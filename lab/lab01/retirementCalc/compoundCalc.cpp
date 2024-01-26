#include "compoundCalc.h"

// Formula: RS = P x (1 + r)t aka rs = p * pow((1 + r), t)
// compoundCalc: Calculates the retirement savings given principal, rate, and time
float compoundCalc(float p, float r, float t) {
    float rs;

    // Not calculating decimals properly
    rs = p * pow((1 + r), t);

    return rs;
}