// Accepts and returns user's validated menu choice
#include <iostream>
#include "calcWeeklyPay.h"
using namespace std;

/*************************************************************
 *            overloaded function calcWeeklyPay              *
 * This function calculates and returns the gross weekly pay *
 * of an hourly-wage employee. Parameters hours and payRate  *
 * hold the number of hours worked and the hourly pay rate.  *
 *************************************************************/
double calcWeeklyPay(int hours, double payRate)
{
	return hours * payRate;
}

/*************************************************************
 *            overloaded function calcWeeklyPay              *
 * This function calculates and returns the gross weekly pay *
 * of a salaried employee. The parameter annSalary holds the *
 * employee's annual salary.                                 *
 *************************************************************/
double calcWeeklyPay(double annSalary)
{
	return annSalary / 52.0;
}

