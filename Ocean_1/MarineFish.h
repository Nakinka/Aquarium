#pragma once
#include "Fish.h"


class MarineFish : public Fish {
public:
	MarineFish(const string&, const string&);
	void swim() override;
	void eat(string) override;
};

