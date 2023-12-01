#pragma once
#include <iostream>

using namespace std;

class Coral
{
private:
	string color;
public:
	Coral(const string&);
	string getColor() const;
	bool operator==(const Coral&) const;
};

