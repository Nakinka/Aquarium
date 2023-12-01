#include "pch.h"
#include "Fish.h"

Fish::Fish(const string& fishName, const string& fishColor, const string& place)
{
	name = fishName;
	color = fishColor;
	habitat = place;
}

void Fish::fishInf()
{
	cout << "Fish name: " << name << endl;
	cout << "Color: " << color << endl;
	cout << "Habitat: " << habitat << endl;
}

string Fish::getName() const
{
	return name;
}


