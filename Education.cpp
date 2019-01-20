//Programmer:  Joseph Chang
//Section:     #001
//Activity:    3
//Date:        March 5, 2018
//File name:   <Education.cpp>

#include "Education.h"

Education::Education()
{
	Degree = "";
	Major = "";
	Research = 0;
}

Education::Education(string deg, string maj, int res)
{
	Degree = deg;
	Major = maj;
	Research = res;
}

Education::~Education()
{
}

string Education::getDegree()
{
	return Degree;
}

string Education::getMajor()
{
	return Major;
}

int Education::getResearch()
{
	return Research;
}

void Education::setDegree(string deg)
{
	Degree = deg;
}

void Education::setMajor(string maj)
{
	Major = maj;
}

void Education::setResearch(int res)
{
	Research = res;
}