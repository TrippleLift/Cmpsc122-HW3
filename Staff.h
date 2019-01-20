//Programmer:  Joseph Chang
//Section:     #001
//Activity:    3
//Date:        March 5, 2018
//File name:   <Staff.h>

#ifndef STAFF_H
#define STAFF_H

#include "Employee.h"

class Staff : public Employee
{
private:
	double hourly_rate;
public:
	Staff();
	Staff(string, string, string, char, Date);
	Staff(string, string, string, char, Date, double);
	~Staff();

	void setRate(double);
	double getRate();
	double monthlyEarning();
	void Print();
};

#endif