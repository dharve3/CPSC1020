// This program totals and averages the sales figures for 
// any number of days. The figures are stored in a
// dynamically allocated array.
#include <iostream> 
#include <iomanip>
#include <memory>
using namespace std;

int main()
{
  unique_ptr<double[]> sales; // smart pointer of type unique
  double  total = 0.0,        // Accumulator
    average;                  // To hold average sales
  int numDays;                // To hold number of days of sales
  
  // Get number of days of sales
  cout << "How many days of sales figures do you wish ";
  cout << "to process? ";
  cin >> numDays;

  // Dynamically allocate an array large enough
  // to hold that many days of sales amounts
  sales = unique_ptr<double[]>(new double[numDays]);  // Allocate memory
  //sales = make_unique<double[]>(numDays);               // Allocate memory

  // Get the sales figures for each day
  cout << "Enter the sales figures below.\n";
  for (int count = 0; count < numDays; count++)
    {
      cout << "Day " << (count + 1) << ": ";
      cin >> sales[count];
    }
  
  // Calculate the total sales
  for (int count = 0; count < numDays; count++)
    {
      total += sales[count];
    }
  
  // Calculate the average sales per day
  average = total / numDays;
  
  // Display the results
  cout << setprecision(2) << fixed << showpoint;
  cout << "\n\nTotal Sales: $" << total << endl;
  cout << "Average Sales: $" << average << endl;

  // Dynamically allocated memory is automatically freed

  
  return 0;
}
