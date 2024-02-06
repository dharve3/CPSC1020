#ifndef SQUARE_H_
#define SQUARE_H_

class Square
{
private:
    double side;
public:
    void setSide(double);
    double getSide();
    double calcArea();
};

#endif