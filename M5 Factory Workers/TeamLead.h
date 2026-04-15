#ifndef TEAMLEADER_H
#define TEAMLEADER_H

#include "ProductionWorker.h"

class TeamLead : public ProductionWorker
{

private:
	double monthlyBonus;
	int requiredTrainingHours;
	int attendedTrainingHours;

public:
	//Constructor	
	TeamLead();
	TeamLead(const string& name, int EmployeeID, const string& HireDate, int shift, double payRate, double monthlyBonus, int requiredTrainingHours, int attendedTrainingHours);
	//Accessors	
	double getMonthlyBonus() const;
	int getRequiredTrainingHours() const;
	int getAttendedTrainingHours() const;
	//Mutators
	void setMonthlyBonus(double bonus);
	void setRequiredTrainingHours(int hours);
	void setAttendedTrainingHours(int hours);
	//Print function
	void printTeamLead() const;
};

#endif