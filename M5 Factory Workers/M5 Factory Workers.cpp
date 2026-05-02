// M5 Factory Workers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream> 
#include <string>
#include "Employee.h"
#include "ProductionWorker.h"
#include "ShiftSupe.h"
#include "TeamLead.h"

using namespace std;

void createProcutionWorker();
void createShiftSupervisor();
void createTeamLead();

int main()
{
	
	int choice;
	while (true)
	{
		cout << "\n======= Employee Menu =======\n";
		cout << "1. Create Pruduction Worker\n";
		cout << "2. Create Shift Supervisor\n";
		cout << "3. Create Team Lead\n";
		cout << "4. Exit\n";
		cout << "Enter your choice: ";
		cin >> choice;
		cin.ignore();//Clear the input buffer
		
		switch (choice)
		{
		case 1:
			createProcutionWorker();//Create Production Worker
			break;
		case 2:
			createShiftSupervisor();//Create Shift Supervisor 
			break;
		case 3:
			createTeamLead();//Create Team Lead
			break;
		case 4:
			cout << "Exiting program." << endl;
			return 0;
		default:
			cout << "Invalid choice. Please try again." << endl;
		}
	}
//	//Creat an Employee object
//	Employee emp("John Doe", 12345, "2020-01-01");
//	cout << "Employee Information:" << endl;
//	emp.printEmployee();
//	cout << endl;
//
//	//Create a ProductionWorker object
//	ProductionWorker worker("Jane Smith", 54321, "2019-05-15", 1, 15.50);
//	cout << "Production Worker Information:" << endl;
//	worker.printProductionWorker();
//	cout << endl;
//
//	//Create a Shift Supervisor object
//	ShiftSupe supervisor("Juson Davis", 67890, "2018-03-10", 50000.0, 5000.0);
//	cout << "Shift Supervisor Information:" << endl;
//	supervisor.printShiftSupe();
//	cout << endl;
//
//	//Create a Team Lead object
//	TeamLead teamLead("Colby West", 98765, "2017-07-20", 2, 18.75, 2000.0, 40, 40);
//	cout << "Team Lead Information:" << endl;
//	teamLead.printTeamLead();
//	cout << endl;	
//
//
//	return 0;
//}
//// Employee
//// |
//// |- ProductionWorker
//// |      |- TeamLead
//// |
//// |- ShiftSupe
