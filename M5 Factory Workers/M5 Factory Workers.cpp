// M5 Factory Workers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream> 
#include <string>
#include "Employee.h"
#include "ProductionWorker.h"
#include "ShiftSupe.h"
#include "TeamLead.h"

using namespace std;

void createProductionWorker();
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
			createProductionWorker();//Create Production Worker
			break;
		case 2:
			createShiftSupervisor();//Create Shift Supervisor 
			break;
		case 3:
			createTeamLead();//Create Team Lead
			break;
		case 4:
			cout << "Exiting program.\n";
			return 0;
		default:
			cout << "Invalid choice. Please try again.\n";
		}
	}
}

void createProductionWorker()
{
	string name, date;
	int id, shift;
	double pay;


			cout << "\n--- Enter Production Worker Information ---\n";

			cout << "Enter name: ";
			getline(cin, name);

			cout << "Enter employee ID (0-9999): ";
			cin >> id;
			cin.ignore();

			cout << "Enter hire date (YYYY-MM-DD): ";
			getline(cin, date);

			cout << "Enter shift (1 for day, 2 for night): ";
			cin >> shift;
            cin.ignore();
			
			cout << "Enter hourly pay rate: ";
			cin >> pay;
			cin.ignore();

	while (true)
	{
		try
		{

			ProductionWorker worker(name, id, date, shift, pay);
			
			cout << "\nProduction Worker Information:\n";
			worker.printProductionWorker();
			break;
		}
		catch (const Employee::InvalidEmployeeID&)
		{
			cout << "Error: Invalid employee ID. Please enter a value between 0 and 9999.\n";
		}
		catch (const ProductionWorker::InvalidShift&)
		{
			cout << "Error: Invalid shift. Please enter 1 (Day) or 2 (Night).\n";
		}
		catch (const ProductionWorker::InvalidPayRate&)
		{
			cout << "Error: Invalid pay rate. Please enter a non-negative value.\n";
		}
	}
}

void createShiftSupervisor()
{
	string name, date;
	int id;
	double salary, bonus;
	
	while (true)
	{
		try
		{
			cout << "\n--- Enter Shift Supervisor Information ---\n";
			cout << "Enter name: ";
			getline(cin, name);
			
			cout << "Enter employee ID (0-9999): ";
			cin >> id;
			cin.ignore();
			
			cout << "Enter hire date (YYYY-MM-DD): ";
			getline(cin, date);
			
			cout << "Enter annual salary: ";
			cin >> salary;
			cin.ignore();
			
			cout << "Enter annual bonus: ";
			cin >> bonus;
			cin.ignore();
			
			ShiftSupe supervisor(name, id, date, salary, bonus);
			
			cout << "\nShift Supervisor Information:\n";
			supervisor.printShiftSupe();
			break;
		}
		catch (const Employee::InvalidEmployeeID&)
		{
			cout << "Error: Invalid employee ID. Please enter a value between 0 and 9999.\n";
		}
		catch (const ShiftSupe::InvalidSalary&)
		{
			cout << "Error: Invalid salary. Please enter a non-negative value.\n";
		}
		catch (const ShiftSupe::InvalidBonus&)
		{
			cout << "Error: Invalid bonus. Please enter a non-negative value.\n";
		}
	}
}	

void createTeamLead()
{
	string name, date;
	int id, shift, requiredHours, attendedHours;
	double payRate, monthlyBonus;
	while (true)
	{
		try
		{
			cout << "\n--- Enter Team Lead Information ---\n";
			cout << "Enter name: ";
			getline(cin, name);
			cout << "Enter employee ID (0-9999): ";
			cin >> id;
			cin.ignore();
			cout << "Enter hire date (YYYY-MM-DD): ";
			getline(cin, date);
			cout << "Enter shift (1 for day, 2 for night): ";
			cin >> shift;
			cin.ignore();
			cout << "Enter hourly pay rate: ";
			cin >> payRate;
			cin.ignore();
			cout << "Enter monthly bonus: ";
			cin >> monthlyBonus;
			cin.ignore();
			cout << "Enter required training hours: ";
			cin >> requiredHours;
			cin.ignore();
			cout << "Enter attended training hours: ";
			cin >> attendedHours;
			cin.ignore();
			TeamLead teamLead(name, id, date, shift, payRate, monthlyBonus, requiredHours, attendedHours);
			cout << "\nTeam Lead Information:\n";
			teamLead.printTeamLead();
			break;
		}
		catch (const Employee::InvalidEmployeeID&)
		{
			cout << "Error: Invalid employee ID. Please enter a value between 0 and 9999.\n";
		}
		catch (const ProductionWorker::InvalidShift&)
		{
			cout << "Error: Invalid shift. Please enter 1 (Day) or 2 (Night).\n";
		}
		catch (const ProductionWorker::InvalidPayRate&)
		{
			cout << "Error: Invalid pay rate. Please enter a non-negative value.\n";
		}
		catch (const TeamLead::InvalidMonthlyBonus&)
		{
			cout << "Error: Invalid monthly bonus. Please enter a non-negative value.\n";
		}
		catch (const TeamLead::InvalidTrainingHours&)
		{
			cout << "Error: Invalid required training hours. Please enter a non-negative value.\n";
		}
		catch (const TeamLead::InvalidAttendedTrainingHours&)
		{
			cout << "Error: Invalid attended training hours. Please enter a value between 0 and required training hours.\n";
		}
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
