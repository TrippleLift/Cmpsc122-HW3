//Programmer:  Joseph Chang
//Section:     #001
//Activity:    3
//Date:        March 5, 2018
//File name:   <Faculty.cpp>

#include "Faculty.h"

Faculty::Faculty()
{
}

Faculty::Faculty(string last, string first, string id, char gender, Date d, string lv, Education obj)
{
	Level = lv;
	object = obj;
	l_name = last;
	f_name = first;
	ID = id;
	sex = gender;
	db = d;
}

Faculty::~Faculty()
{
}

string Faculty::getLevel()
{
	return Level;
}

Education Faculty::getObject()
{
	return object;
}

void Faculty::setLevel(string lv)
{
	Level = lv;
}

void Faculty::setObject(Education obj)
{
	object = obj;
}

double Faculty::monthlyEarning()
{
	if (Level == "AS")
	{
		return FACULTY_MONTHLY_SALARY;
	}
	else if (Level == "AO")
	{
		return FACULTY_MONTHLY_SALARY * 1.2;
	}
	else if (Level == "FU")
	{
		return FACULTY_MONTHLY_SALARY * 1.4;
	}
	else
	{
		cout << "There is no level.\n";
	}
}

void Faculty::Print()
{
	cout << "ID Employee number: " << ID << endl;
	cout << "Employee name: " << l_name << ", " << f_name << endl;
	cout << "Birth date: " << db << endl;
	if (Level == "AS")
		cout << "Assistant professor\n";
	else if (Level == "AO")
		cout << "Associate professor\n";
	else if (Level == "FU")
		cout << "Professor\n";
	
	cout << "Monthly Salary: " << monthlyEarning() << endl;
}