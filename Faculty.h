//Programmer:  Joseph Chang
//Section:     #001
//Activity:    3
//Date:        March 5, 2018
//File name:   <Faculty.h>

#ifndef FACULTY_H
#define FACULTY_H

#include "Employee.h"
#include "Education.h"

class Faculty : public Employee
{
private:
	string Level;
	Education object;
public:
	Faculty();
	Faculty(string, string, string, char, Date, string, Education);
	~Faculty();

	string getLevel();
	Education getObject();

	void setLevel(string);
	void setObject(Education);

	double monthlyEarning();
	void Print();
};

#endif