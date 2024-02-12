#ifndef RANGE_H_
#define RANGE_H_
#include <stdexcept>

class Range 
{
private:
  double min {2.0};
  double max {3.0};
  
public:
  Range() = default;
  Range(double minVal, double maxVal) : min{minVal}, max{maxVal}
  { if (maxVal < minVal)
      { throw std::invalid_argument("Maximum is smaller than minimum");}    
  }					     
  
  void setMin(double);
  void setMax(double);
  double getMin();
  double getMax();
};

#endif // RANGE_H_
