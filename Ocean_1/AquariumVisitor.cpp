#include "pch.h"
#include "AquariumVisitor.h"

AquariumVisitor::AquariumVisitor(const string& name, int ticketPrice)
{
	visitorName = name;
	price = ticketPrice;
	isUsed = false;
}

void AquariumVisitor::useTicket()
{
	if (isUsed) 

		cout << "Ticket has already been used." << endl;
	else {
		isUsed = true;
		cout << "Ticket used successfully." << endl;
	}
}

void AquariumVisitor::displayTicketInf()
{
	cout << "Visitor name: " << visitorName << endl;
	cout << "Ticket price: " << price << endl;
	cout << "Ticket status: " << (isUsed ? "Used" : "Unused") << endl;
}

bool AquariumVisitor::isTicketUsed()
{
	return isUsed;
}

