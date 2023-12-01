#include "pch.h"
#include "FreshWaterFish.h"

FreshWaterFish::FreshWaterFish(const string& fishName, const string& fishColor)
	:Fish(fishName, fishColor, "River")
{}

void FreshWaterFish::swim() 
{
	cout << "The freshwater fish named " << getName() << " is swimming" << endl;
}

void FreshWaterFish::eat(string food)
{
	cout << "The freshwater fish named " << getName() << " is eating " << food << endl;
}

void FreshWaterFish::brethe() const
{
	cout << "The freshwater fish named " << getName() << " is breathing" << endl;
}

void FreshWaterFish::reproduce() const
{
	cout << "The freshwater fish named " << getName() << " is reproducing" << endl;
}

