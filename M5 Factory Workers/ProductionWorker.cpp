#include "ProductionWorker.h"
#include <iostream>
using namespace std;

//Default constructor
ProductionWorker::ProductionWorker() : Employee() 
{
	shift = 1;
	payRate = 0.0;
}

//Overloaded constructor
ProductionWorker::ProductionWorker(const string& name, int EmployeeID, const string& startingDate, int shift, double payRate) 
	: Employee(name, EmployeeID, startingDate), shift(shift), payRate(payRate) {
}

void ProductionWorker::setShift(int shift) { this->shift = shift; }

void ProductionWorker::setPayRate(double payRate) { this->payRate = payRate; }

int ProductionWorker::getShift() const { return shift; }

double ProductionWorker::getPayRate() const { return payRate; }	

void ProductionWorker::printProductionWorker() const {
	printEmployee();
	cout << "Shift: " << (getShift() == 1 ? "Day" : "Night") << endl;
	cout << "Pay Rate: $" << getPayRate() << endl;
}


