//Programmer:  Joseph Chang
//Section:     #001
//Activity:    3
//Date:        March 5, 2018
//File name:   <Education.h>

#ifndef EDUCATION_H
#define EDUCATION_H

#include <string>
using namespace std;

class Education
{
private:
	string Degree;
	string Major;
	int Research;
public:
	Education();
	Education(string, string, int);
	~Education();

	string getDegree();
	string getMajor();
	int getResearch();

	void setDegree(string);
	void setMajor(string);
	void setResearch(int);
};

#endif