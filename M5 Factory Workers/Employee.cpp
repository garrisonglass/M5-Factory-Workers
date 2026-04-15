#include "Employee.h"
#include <iostream>

using namespace std;

Employee::Employee() : name(""), EmployeeID(0), HireDate("") {}

//Overloaded constructor
Employee::Employee(const string& name, int EmployeeID, const string& startingDate) 
	: name(name), EmployeeID(EmployeeID), HireDate(startingDate) {}

//Accessors
string Employee::getName() const { return name; }
int    Employee::getEmployeeID() const { return EmployeeID; }
string Employee::getStartingDate() const { return HireDate; }

//Mustators
void Employee::setName(const string& name) { this->name = name; }
void Employee::setEmployeeID(int EmployeeID) { this->EmployeeID = EmployeeID; }
void Employee::setStartingDate(const string& startingDate) { this->HireDate = startingDate; }

//Print function
void Employee::printEmployee() const
{
	cout << "Employee Name: " << name         << endl;
	cout << "Employee ID:   " << EmployeeID   << endl;
	cout << "Hire Date: " << HireDate << endl;
}
