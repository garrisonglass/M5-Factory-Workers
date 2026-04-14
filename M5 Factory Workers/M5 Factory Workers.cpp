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

	//Create a ProductionWorker object
	ProductionWorker worker("Jane Smith", 54321, "2019-05-15", 1, 15.50);
	cout << "Production Worker Information:" << endl;
	worker.printProductionWorker();
	cout << endl;

	//Create a Shift Supervisor object
	ShiftSupe supervisor("Juson Davis", 67890, "2018-03-10", 50000.0, 5000.0);
	cout << "Shift Supervisor Information:" << endl;
	supervisor.printShiftSupe();
	cout << endl;

	return 0;
}
