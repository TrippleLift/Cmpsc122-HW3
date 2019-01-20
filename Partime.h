//Programmer:  Joseph Chang
//Section:     #001
//Activity:    3
//Date:        March 5, 2018
//File name:   <Partime.h>

#ifndef PARTIME_H
#define PARTIME_H

#include "Staff.h"

class Partime : public Staff
{
private:
	int hour_worked_per_week;
	double rate_per_hour;
public:
	Partime();
	Partime(string last, string first, string id, char gender, Date d, double rate, int hours) : Staff(last, first, id, gender, d)
	{
		rate_per_hour = rate;
		hour_worked_per_week = hours;
	}
	~Partime();

	void setHour_worked_per_week(int);
	void setRate_per_hour(double);
	int getHour_worked_per_week();
	double getRate_per_hour();

	double monthlyEarning();
	void Print();
};

#endif