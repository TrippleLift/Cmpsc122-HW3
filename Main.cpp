//Programmer:  Joseph Chang
//Section:     #001
//Activity:    3
//Date:        March 5, 2018
//File name:   <Main.cpp>

#include "Partime.h"
#include "Faculty.h"
#include "Staff.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	vector<Employee*> employees;

	Date d1(2, 23, 59);
	employees.push_back(new Staff("Allen", "Paita", "123", 'M', d1, 50));
	
	Date d2(7, 12, 64);
	employees.push_back(new Staff("Zapata", "Steven", "456", 'F', d2, 35));

	Date d3(6, 2, 70);
	employees.push_back(new Staff("Rios", "Enrique", "789", 'M', d3, 40));

	Date d4(4, 27, 62);
	Education e4("Ph.D", "Engineering", 3);
	employees.push_back(new Faculty("Johnson", "Anne", "243", 'F', d4, "FU", e4));

	Date d5(3, 14, 75);
	Education e5("Ph.D", "English", 1);
	employees.push_back(new Faculty("Bouris", "William", "791", 'F', d5, "AS", e5));

	Date d6(5, 22, 80);
	Education e6("MS", "Physical Education", 0);
	employees.push_back(new Faculty("Andrade", "Christopher", "623", 'F', d6, "AS", e6));

	Date d7(8, 10, 77);
	employees.push_back(new Partime("Guzman", "Augusto", "455", 'F', d7, 35, 30));

	Date d8(9, 15, 87);
	employees.push_back(new Partime("Depirro", "Martin", "678", 'F', d8, 30, 15));

	Date d9(11, 24, 88);
	employees.push_back(new Partime("Aldaco", "Marque", "945", 'M', d9, 20, 35));

	for (int i = 0; i < 9; i++)
	{
		employees[i]->Print();
		cout << endl;
	}

	double sumEarning = 0;
	for (int i = 0; i < 9; i++)
	{
		sumEarning += employees[i]->monthlyEarning();
	}
	cout << "Total monthly salary for all employees: " << sumEarning << endl;

	system("pause");
	return 0;
}