// This program demonstrates overloaded functions to calculate
// the gross weekly pay of hourly-wage or salaried employees.
#include <iostream>
#include <iomanip>
#include "getChoice.h"
#include "calcWeeklyPay.h"
using namespace std;

int main()
{
  char selection;    // Menu selection
  int worked;        // Weekly hours worked
  double rate,       // Hourly pay rate
    yearly;          // Annual salary
  
  // Set numeric output formatting
  cout << fixed << showpoint << setprecision(2);
	
  // Display the menu and get a selection
  cout << "Do you want to calculate the weekly pay of\n";
  cout << "(H) an hourly-wage employee, or \n";
  cout << "(S) a salaried employee? ";
  selection = getChoice();
  
  // Process the menu selection
  switch (selection)
    {
      // Hourly employee
    case 'H' :
    case 'h' :  cout << "How many hours were worked? ";
      cin  >> worked;
      cout << "What is the hourly pay rate? ";
      cin  >> rate;
      cout << "The gross weekly pay is $";
      cout << calcWeeklyPay(worked, rate) << endl;
      break;
      
      // Salaried employee				
    case 'S' :
    case 's' :  cout << "What is the annual salary? ";
      cin  >> yearly;
      cout << "The gross weekly pay is $";
      cout << calcWeeklyPay(yearly) << endl;
    }

  return 0;
}


