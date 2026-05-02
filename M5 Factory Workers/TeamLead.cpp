#include "TeamLead.h"
#include <iostream>

using namespace std;

//Default constructor
TeamLead::TeamLead() : ProductionWorker(), monthlyBonus(0.0), requiredTrainingHours(0), attendedTrainingHours(0) {}

//Fully parameterized constructor
TeamLead::TeamLead(const string& name, int EmployeeID, const string& HireDate, int shift, double payRate, double monthlyBonus, int requiredTrainingHours, int attendedTrainingHours)
	: ProductionWorker(name, EmployeeID, HireDate, shift, payRate), 
	  monthlyBonus(monthlyBonus), 
	  requiredTrainingHours(requiredTrainingHours), 
	  attendedTrainingHours(attendedTrainingHours) 
{
	if (monthlyBonus < 0)
		throw InvalidMonthlyBonus();
	if (requiredTrainingHours < 0)
		throw InvalidTrainingHours();
	if (attendedTrainingHours < 0 || attendedTrainingHours > requiredTrainingHours)
		throw InvalidAttendedTrainingHours();
	this->monthlyBonus = monthlyBonus;
	this->requiredTrainingHours = requiredTrainingHours;
	this->attendedTrainingHours = attendedTrainingHours;
}

//Accessors
double TeamLead::getMonthlyBonus() const { return monthlyBonus; }
int    TeamLead::getRequiredTrainingHours() const { return requiredTrainingHours; }
int    TeamLead::getAttendedTrainingHours() const { return attendedTrainingHours; }	

//Mutators
void TeamLead::setMonthlyBonus(double bonus) 
{ 
	if (bonus < 0)
		throw InvalidMonthlyBonus();
	this->monthlyBonus = bonus; 
}
void TeamLead::setRequiredTrainingHours(int hours) 
{ 
	if (hours < 0)
		throw InvalidTrainingHours();
	this->requiredTrainingHours = hours; 
}
void TeamLead::setAttendedTrainingHours(int hours) 
{ 
	if (hours < 0 || hours > requiredTrainingHours)
		throw InvalidAttendedTrainingHours();
	this->attendedTrainingHours = hours; 
}

//Print function
void TeamLead::printTeamLead() const
{
	printProductionWorker();

	cout << "Monthly Bonus: $" << monthlyBonus << endl;
	cout << "Required Training Hours: " << requiredTrainingHours << endl;
	cout << "Attended Training Hours: " << attendedTrainingHours << endl;
}