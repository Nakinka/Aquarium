#include "pch.h"
#include "MarineFish.h"

MarineFish::MarineFish(const string& fishName, const string& fishColor)
	:Fish(fishName,fishColor,"Saltwater")
{
}

void MarineFish::swim() {
	cout << "The " << getName() << " is swimming in the ocean" << endl;
}

void MarineFish::eat(string food)
{
	cout << "The " << getName() << " is eating " << food << " in the ocean" << endl;
}
