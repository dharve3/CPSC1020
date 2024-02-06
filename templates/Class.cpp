#include "Class.h"

void Class::setValue(double v)
{
    value = v;
}

double Class::getValue()
{
    return value;
}
  
double Class:calcValue()
{
    return (value * 2);
}