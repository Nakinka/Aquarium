#pragma once

#include <iostream>
#include <vector>

using namespace std;

class MarineInvertebrate
{
private:
	string species;
	string habitat;
	int idAquarium;
public:
	MarineInvertebrate(const string&, const string&, int);
	string getSpecies();
	string getHabitat();
	int getIdAquarium();
	void setSpecies(const string&);
	void setHabitat(const string&);
	void setAquariumId(int);
	void displayInf() const;

};

