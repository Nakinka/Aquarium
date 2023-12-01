#include "pch.h"
#include "AquaticPlant.h"

AquaticPlant::AquaticPlant(const string& namePlanet, double heightPlanet)
{
	name = namePlanet;
	height = heightPlanet;
}

string AquaticPlant::getName()
{
	return name;
}

double AquaticPlant::getHeight()
{
	return height;
}

void AquaticPlant::setHeight(double nowHeight)
{
	height = nowHeight;
}

void AquaticPlant::grow(double amount)
{
	height += amount;
}


