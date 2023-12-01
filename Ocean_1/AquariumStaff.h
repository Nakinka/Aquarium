#pragma once
#include <iostream>

using namespace std;

class AquariumStaff
{
private:
	string name;
	string position;
	bool working;
public:
	AquariumStaff(const string&, const string&);
	void displayStaffInf()const;
	void doAquariumWork(const string&);
	bool isWorking() const;
};

