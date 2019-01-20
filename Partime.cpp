//Programmer:  Joseph Chang
//Section:     #001
//Activity:    3
//Date:        March 5, 2018
//File name:   <Partime.cpp>

#include "Partime.h"

Partime::Partime()
{
}


Partime::~Partime()
{
}

void Partime::setHour_worked_per_week(int hours)
{
	hour_worked_per_week = hours;
}

void Partime::setRate_per_hour(double rate)
{
	rate_per_hour = rate;
}

int Partime::getHour_worked_per_week()
{
	return hour_worked_per_week;
}

double Partime::getRate_per_hour()
{
	return rate_per_hour;
}

double Partime::monthlyEarning()
{
	return hour_worked_per_week * rate_per_hour;
}

void Partime::Print()
{
	cout << "ID Employee number: " << ID << endl;
	cout << "Employee name: " << l_name << ", " << f_name << endl;
	cout << "Birth date: " << db << endl;
	cout << "Hours works per month: " << hour_worked_per_week << endl;
	cout << "Monthly Salary: " << monthlyEarning() << endl;
}