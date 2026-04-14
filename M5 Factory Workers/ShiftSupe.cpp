#include "ShiftSupe.h"
#include <iostream>

using namespace std;

//Default constructor
ShiftSupe::ShiftSupe() : Employee() 
{
	salary = 0.0;
	bonus = 0.0;
}

//Overloaded constructor
ShiftSupe::ShiftSupe(string name, int EmployeeID, string startingDate, double salary, double bonus)
	: Employee(name, EmployeeID, startingDate)
{
	this->salary = salary;
	this->bonus = bonus;
}

void ShiftSupe::setSalary(double salary) { this->salary = salary; }

void ShiftSupe::setBonus(double bonus) { this->bonus = bonus; }

double ShiftSupe::getSalary() const { return salary; }

double ShiftSupe::getBonus() const { return bonus; }

void ShiftSupe::printShiftSupe() const
{
	printEmployee();
	cout << "Salary: " << salary << endl;
	cout << "Bonus: " << bonus << endl;
}