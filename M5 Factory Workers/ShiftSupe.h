#ifndef SHIFTSUPERVISOR_H
#define SHIFTSUPERVISOR_H

#include "Employee.h"

class ShiftSupe : public Employee
{
	double salary;
	double bonus;

public:

	//Default constructor
	ShiftSupe();
	ShiftSupe(string name, int EmployeeID, string HireDate, double salary, double bonus);

	//Mutators
	void setSalary(double salary);
	void setBonus(double bonus);

	//Accessors
	double getSalary() const;
	double getBonus() const;

	//Print function
	void printShiftSupe() const;
};

#endif