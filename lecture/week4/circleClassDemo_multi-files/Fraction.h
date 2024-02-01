// Fraction.h is the class specification file
#ifndef FRACTION_H_
#define FRACTION_H_

class Fraction {
private:
  int num, den;

public:
  void setNum(int);
  void setDen(int);
  void setNumDen(int, int);
  double value();
};

#endif
