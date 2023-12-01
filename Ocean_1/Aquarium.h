#pragma once
#include<iostream>
#include<vector>
#include"Coral.h"
#include"Veterinarian.h" 

using namespace std;

class Aquarium
{
private:
	string name;
	int capacity;
	vector<string>fish;
	int waterLevel;
	vector<Coral>corals;
	vector<Veterinarian>veterinarians;
public:
	Aquarium(const string&, int);
	void getAquariumInf() const;
	void addFish(const string&);
	void removeFish(const string&);
	int getFishCount() const;
	void addWater(int);
	void removeWater(int);
	int getWaterLevel()const;
	void addCoral(const Coral& );
	void removeCoral(const Coral&);
	int getCoralCount() const;
	bool isCoralInAquarium() const;
	void printAquariumInfoCorals() const;
	void addVeterianarian(const Veterinarian&);
	int getVeterinarianCount() const;
};

