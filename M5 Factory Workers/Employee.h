#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
using namespace std;
class Employee

{
private:
	string name;
	int EmployeeID;
	string startingDate;

public:
	//Constructor
	Employee();
	Employee(const string& time, int EmployeeID, const string& startingDate);

	//Accessors
	string getName() const;
	int getEmployeeID() const;
	string getStartingDate() const;

	//Mutators
	void setName(const string& name);
	void setEmployeeID(int EmployeeID);
	void setStartingDate(const string& startingDate);

	//Print function
	void printEmployee() const;
};

#endif//EMPLOYEE_H