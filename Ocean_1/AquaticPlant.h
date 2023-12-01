#pragma once
#include <iostream>
#include <string>

using namespace std;

class AquaticPlant
{
private:
	string name;
	double height;
public:
	AquaticPlant(const string&, double);
	string getName();
	double getHeight();
	void setHeight(double);
	void grow(double);
};

