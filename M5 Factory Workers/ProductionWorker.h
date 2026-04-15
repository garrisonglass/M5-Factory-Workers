#ifndef PRODUCTIONWORKER_H
#define PRODUCTIONWORKER_H

#include "Employee.h"

class ProductionWorker : public Employee	
{
	private:
		int shift; //1 for day shift, 2 for night shift
		double payRate;

public:
	ProductionWorker();
	ProductionWorker(const string& name, int EmployeeID, const string& HireDate, int shift, double payRate);

	void setShift(int shift);
	void setPayRate(double payRate);

	int getShift() const;
	double getPayRate() const;

	void printProductionWorker() const;
};

#endif
