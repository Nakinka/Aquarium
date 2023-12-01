#include "pch.h"
#include "AquariumStaff.h"

AquariumStaff::AquariumStaff(const string& staffName, const string& positionWork)
{
	name = staffName;
	position = positionWork;
	working = false;
}

void AquariumStaff::displayStaffInf() const
{
	cout << "Staff Name: " << name << endl;
	cout << "Position: " << position << endl;
}

void AquariumStaff::doAquariumWork(const string& task)
{
	
	working = true;
	cout << "Staff " << name << " is performing task: " << task << endl;
}

bool AquariumStaff::isWorking() const
{
	return working;
}




