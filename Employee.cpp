//Programmer:  Joseph Chang
//Section:     #001
//Activity:    3
//Date:        March 5, 2018
//File name:   <Employee.cpp>

#include "Employee.h"

Employee::Employee()
{
}

Employee::Employee(string last, string first, string id, char gender, Date d)
{
	l_name = last;
	f_name = first;
	ID = id;
	sex = gender;
	db = d;
}

void Employee::Print()
{
	cout << "ID Employee number: " << ID << endl;
	cout << "Employee name: " << l_name << ", " << f_name << endl;
	cout << "Birth date: " << db << endl;
}

string Employee::getLname()
{
	return l_name;
}

string Employee::getFname()
{
	return f_name;
}

string Employee::getId()
{
	return ID;
}

char Employee::getSex()
{
	return sex;
}

Date Employee::getDateOfBirth()
{
	return db;
}

void Employee::setLname(string last)
{
	l_name = last;
}

void Employee::setFname(string first)
{
	f_name = first;
}

void Employee::setID(string id)
{
	ID = id;
}

void Employee::setSex(char gender)
{
	sex = gender;
}

void Employee::setDateOfBirth(Date d)
{
	db = d;
}