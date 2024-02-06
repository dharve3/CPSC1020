#ifndef TRAPEZOID_H_
#define TRAPEZOID_H_

class Trapezoid
{
private:
    double base1;
    double base2;
    double height;
public:
    void setBase1(double);
    double getBase1();
    void setBase2(double);
    double getBase2();
    void setHeight(double);
    double getHeight();
    double calcArea();
}