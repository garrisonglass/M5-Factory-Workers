#include "Employee.h"
#include <iostream>

using namespace std;

Employee::Employee() : name(""), EmployeeID(0), startingDate("") {}

//Overloaded constructor
Employee::Employee(const string& name, int EmployeeID, const string& startingDate) 
	: name(name), EmployeeID(EmployeeID), startingDate(startingDate) {}

//Accessors
string Employee::getName() const { return name; }
int    Employee::getEmployeeID() const { return EmployeeID; }
string Employee::getStartingDate() const { return startingDate; }

//Mustators
void Employee::setName(const string& name) { this->name = name; }
void Employee::setEmployeeID(int EmployeeID) { this->EmployeeID = EmployeeID; }
void Employee::setStartingDate(const string& startingDate) { this->startingDate = startingDate; }

//Print function
void Employee::printEmployee() const
{
	cout << "Employee Name: " << name         << endl;
	cout << "Employee ID: "   << EmployeeID   << endl;
	cout << "Starting Date: " << startingDate << endl;
}
