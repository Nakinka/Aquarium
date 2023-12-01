#include "pch.h"
#include "Coral.h"

Coral::Coral(const string& colorCoral)
{
	color = colorCoral;
}

string Coral::getColor() const
{
	return color;
}

bool Coral::operator==(const Coral& other) const
{
	return color==other.color;
}
