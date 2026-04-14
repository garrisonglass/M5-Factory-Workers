#include "TeamLead.h"
#include <iostream>

using namespace std;

//Default constructor
TeamLead::TeamLead() : ProductionWorker(), monthlyBonus(0.0), requiredTrainingHours(0), attendedTrainingHours(0) {}

//Fully parameterized constructor
TeamLead::TeamLead(const string& name, int EmployeeID, const string& startingDate, int shift, double payRate, double monthlyBonus, int requiredTrainingHours, int attendedTrainingHours)
	: ProductionWorker(name, EmployeeID, startingDate, shift, payRate), 
	  monthlyBonus(monthlyBonus), 
	  requiredTrainingHours(requiredTrainingHours), 
	  attendedTrainingHours(attendedTrainingHours) {}

//Accessors
double TeamLead::getMonthlyBonus() const { return monthlyBonus; }
int    TeamLead::getRequiredTrainingHours() const { return requiredTrainingHours; }
int    TeamLead::getAttendedTrainingHours() const { return attendedTrainingHours; }	

//Mutators
void TeamLead::setMonthlyBonus(double bonus) { this->monthlyBonus = bonus; }
void TeamLead::setRequiredTrainingHours(int hours) { this->requiredTrainingHours = hours; }
void TeamLead::setAttendedTrainingHours(int hours) { this->attendedTrainingHours = hours; }

//Print function
void TeamLead::printTeamLead() const
{
	printProductionWorker();

	cout << "Monthly Bonus: $" << monthlyBonus << endl;
	cout << "Required Training Hours: " << requiredTrainingHours << endl;
	cout << "Attended Training Hours: " << attendedTrainingHours << endl;
}