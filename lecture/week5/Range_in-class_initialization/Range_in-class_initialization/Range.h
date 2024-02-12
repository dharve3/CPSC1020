#ifndef RANGE_H_
#define RANGE_H_

class Range 
{
private:
  double min {2.0};
  double max {3.0};
  
public:
  Range() = default;
  Range(double minVal, double maxVal) : min{minVal}, max{maxVal} {
  }
  
  void setMin(double);
  void setMax(double);
  double getMin();
  double getMax();
};

#endif // RANGE_H_
