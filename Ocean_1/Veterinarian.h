#pragma once
#include <iostream>

using namespace std;

class Veterinarian
{
private:
	string name;
	int experience;
public:
	Veterinarian(const string&, int);
	void setName(const string&);
	string getName()const;
	void setExperience(int);
	int getExperience()const;
	void treatAnimal(const string&);
	void getInfo() const;
};

