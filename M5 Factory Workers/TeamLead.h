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
	TeamLead(const string& name, int EmployeeID, const string& startingDate, int shift, double payRate, double monthlyBonus, int requiredTrainingHours, int attendedTrainingHours);
	//Accessors	
	double getMonthlyBonus() const;
	int setRequiredTrainingHours() const;
	int setAttendedTrainingHours() const;
	//Mutators
	void setMonthlyBonus(double bonus);
	void getRequiredTrainingHours(int hours);
	void getAttendedTrainingHours(int hours);
	//Print function
	void printTeamLead() const;
};

#endif