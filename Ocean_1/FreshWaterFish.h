#pragma once
#include "Fish.h"

class FreshWaterFish:public Fish
{
private:
	string habitat;
public:
	FreshWaterFish(const string&, const string&);
	void swim() override;
	void eat(string);
	void brethe()const;
	void reproduce()const;
};

