// M5 Factory Workers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iostream>
#include "Employee.h"
#include "ProductionWorker.h"
#include "ShiftSupe.h"
#include "TeamLead.h"

using namespace std;

int main()
{
	//Creat an Employee object
	Employee emp("John Doe", 12345, "2020-01-01");
	cout << "Employee Information:" << endl;
	emp.printEmployee();
	cout << endl;

	return 0;
}
