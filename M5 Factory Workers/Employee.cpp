#include "Employee.h"
#include <iostream>

using namespace std;

Employee::Employee() : name(""), EmployeeID(0), HireDate("") {}

//Overloaded constructor
Employee::Employee(const string& name, int EmployeeID, const string& startingDate) 
	: name(name), EmployeeID(EmployeeID), HireDate(startingDate) 
{
	if (EmployeeID < 0 || EmployeeID > 9999) 
		throw InvalidEmployeeID();
	this->EmployeeID = EmployeeID;
	
}

//Accessors
string Employee::getName() const { return name; }
int    Employee::getEmployeeID() const { return EmployeeID; }
string Employee::getStartingDate() const { return HireDate; }

//Mustators
void Employee::setName(const string& name) { this->name = name; }
void Employee::setEmployeeID(int EmployeeID) 
{
	if (EmployeeID < 0 || EmployeeID > 9999) 
		throw InvalidEmployeeID();
	this->EmployeeID = EmployeeID;
}
void Employee::setStartingDate(const string& startingDate) { this->HireDate = startingDate; }

//Print function
void Employee::printEmployee() const
{
	cout << "Employee Name: " << name         << endl;
	cout << "Employee ID:   " << EmployeeID   << endl;
	cout << "Hire Date: " << HireDate << endl;
}
