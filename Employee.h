//Programmer:  Joseph Chang
//Section:     #001
//Activity:    3
//Date:        March 5, 2018
//File name:   <Employee.h>

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include<iostream>
#include<string>
#include "Date.h"
using namespace std;

const double FACULTY_MONTHLY_SALARY = 5000.00;
const int STAFF_MONTHLY_HOURS_WORKED = 160;
class Employee
{
public:
	Employee();
	Employee(string, string, string, char, Date);
	virtual void Print();

	virtual double monthlyEarning() = 0;//pure virtual function to indicate the class is 
	//abstract. WE DON’T IMPLEMENT THIS FUNCTION IN THIS CLASS, BUT ALL CLASSES THAT INHERIT 
	//THIS CLASS MUST IMPLEMENT THIS FUCNTION.
	
	string getLname();
	string getFname();
	string getId();
	char getSex();
	Date getDateOfBirth();

	void setLname(string);
	void setFname(string);
	void setID(string);
	void setSex(char);
	void setDateOfBirth(Date);
	
protected:
	string l_name;
	string f_name;
	string ID;
	char sex;
	Date db;
};


#endif