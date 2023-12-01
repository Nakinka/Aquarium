#pragma once
#include <iostream>

using namespace std;

class Fish
{
private:
	string name;
	string color;
	string habitat;
public:
	Fish(const string&, const string&, const string&);
	void fishInf();
	virtual void swim() = 0;
	virtual void eat(string) = 0;
	string getName() const;

};

