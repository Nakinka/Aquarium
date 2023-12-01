#pragma once
#include <iostream>

using namespace std;

class AquariumVisitor
{
private:
	string visitorName;
	int price;
	bool isUsed;
public:
	AquariumVisitor(const string&, int);
	void useTicket();
	void displayTicketInf();
	bool isTicketUsed();
};

