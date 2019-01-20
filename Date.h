//Programmer:  Joseph Chang
//Section:     #001
//Activity:    3
//Date:        March 5, 2018
//File name:   <Date.h>

#ifndef DATE_H
#define DATE_H

#include <string>
using namespace std;

class Date
{
private:
	int day;
	int month;
	int year;
public:
	Date();
	Date(int, int, int);
	~Date();
	string set_date();
	void check_date(int, int, int);
	
	//modifiers
	void setDay(int temp_day)
	{
		day = temp_day;
	}
	void setMonth(int temp_month)
	{
		month = temp_month;
	}
	void setYear(int temp_year)
	{
		year = temp_year;
	}

	//accessors
	int getDay()
	{
		return day;
	}
	int getMonth()
	{
		return month;
	}
	int getYear()
	{
		return year;
	}

	//overload operator <<
	friend ostream &operator<<(ostream &, Date &);
};

#endif