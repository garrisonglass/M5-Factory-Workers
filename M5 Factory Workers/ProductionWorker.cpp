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
ProductionWorker::ProductionWorker(const string& name, int EmployeeID, const string& HireDate, int shift, double payRate) 
	: Employee(name, EmployeeID, HireDate), shift(shift), payRate(payRate) 
{
	if (shift != 1 && shift != 2)
		throw InvalidShift();
	if (payRate < 0)
		throw InvalidPayRate();
	
	    this->shift   = shift;
		this->payRate = payRate;
}

void ProductionWorker::setShift(int shift) 
{ 
	if (shift != 1 && shift != 2)
		throw InvalidShift();
	this->shift = shift; 
}

void ProductionWorker::setPayRate(double payRate) 
{
	if (payRate < 0)
		throw InvalidPayRate();
	this->payRate = payRate; 
}

int ProductionWorker::getShift() const { return shift; }

double ProductionWorker::getPayRate() const { return payRate; }	

void ProductionWorker::printProductionWorker() const 
{
	printEmployee();
	cout << "Shift: " << (getShift() == 1 ? "Day" : "Night") << endl;
	cout << "Pay Rate: $" << getPayRate() << endl;
}


