//Programmer:  Joseph Chang
//Section:     #001
//Activity:    3
//Date:        March 5, 2018
//File name:   <Date.cpp>

#include "Date.h"
#include <iostream>

Date::Date()
{
}

Date::Date(int temp_month, int temp_day, int temp_year)
{
	check_date(temp_month, temp_day, temp_year);
}

Date::~Date()
{
}

string Date::set_date()
{
	switch (month)
	{
	case 1: return "January";
	case 2: return "February";
	case 3: return "March";
	case 4: return "April";
	case 5: return "May";
	case 6: return "June";
	case 7: return "July";
	case 8: return "August";
	case 9: return "September";
	case 10: return "October";
	case 11: return "November";
	case 12: return "December";
	default: cout << "Error";
		return "";
	}
}

void Date::check_date(int temp_month, int temp_day, int temp_year)
{
	bool pass;
	do 
	{
		month = temp_month;//for calling set_date()

		pass = true;
		if (temp_year>2018 || temp_year<0)
		{
			cout << "Year should be lower than 2018 and positive.\n";
			pass = false;
		}
		if (temp_month > 12 || temp_month < 1)
		{
			cout << "Month should be in-between 0 and 12.\n";
			pass = false;
		}
		if (pass)
		{
			if (temp_month == 2 && (temp_day > 28 || temp_day < 1))
			{
				//month 2
				cout << set_date() << " " << temp_day << " does not exist.\n";
				pass = false;
			}
			else if (temp_month <= 7)
			{
				//month 1~7 except 2
				if (((temp_month % 2) == 1) && (temp_day > 31 || temp_day < 1))
				{
					cout << set_date() << " " << temp_day << " does not exist.\n";
					pass = false;
				}
				else if (temp_day > 30 || temp_day < 1)
				{
					cout << set_date() << " " << temp_day << " does not exist.\n";
					pass = false;
				}
			}
			else
			{
				//month 8~12
				if (((temp_month % 2) == 0) && (temp_day > 31 || temp_day < 1))
				{
					cout << set_date() << " " << temp_day << " does not exist.\n";
					pass = false;
				}
				else if (temp_day > 30 || temp_day < 1)
				{
					cout << set_date() << " " << temp_day << " does not exist.\n";
					pass = false;
				}
			}
		}

		//reset date
		if (!pass)
		{
			cout << "Enter day: ";
			cin >> temp_day;
			cout << "Enter month: ";
			cin >> temp_month;			
			cout << "Enter year: ";
			cin >> temp_year;
		}
	} while (!pass);

	//pass the test
	day = temp_day;
	month = temp_month;
	year = temp_year;
}

ostream &operator<<(ostream &os, Date &obj)
{
	//string temp = obj.set_date();
	os << obj.set_date() << ", " << obj.day
		<< ", " << obj.year << ".";

	return os;
}