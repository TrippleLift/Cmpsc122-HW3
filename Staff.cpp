//Programmer:  Joseph Chang
//Section:     #001
//Activity:    3
//Date:        March 5, 2018
//File name:   <Staff.cpp>

#include "Staff.h"

Staff::Staff()
{
}

Staff::Staff(string last, string first, string id, char gender, Date d, double wage)
{
	hourly_rate = wage;
	l_name = last;
	f_name = first;
	ID = id;
	sex = gender;
	db = d;
}

Staff::Staff(string last, string first, string id, char gender, Date d)
{
	l_name = last;
	f_name = first;
	ID = id;
	sex = gender;
	db = d;
}

Staff::~Staff()
{
}

void Staff::setRate(double rate)
{
	hourly_rate = rate;
}

double Staff::getRate()
{
	return hourly_rate;
}

double Staff::monthlyEarning()
{
	return hourly_rate * STAFF_MONTHLY_HOURS_WORKED;
}

void Staff::Print()
{
	cout << "ID Employee number: " << ID << endl;
	cout << "Employee name: " << l_name << ", " << f_name << endl;
	cout << "Birth date: " << db << endl;
	cout << "Full time: " << hourly_rate << endl;
	cout << "Monthly Salary: " << monthlyEarning() << endl;
}