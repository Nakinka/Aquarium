#include "pch.h"
#include "Aquarium.h"

Aquarium::Aquarium(const string& aquariumName, int aquariumCapacity)
{
	name = aquariumName;
	capacity = aquariumCapacity;
	waterLevel = 0;
}

void Aquarium::getAquariumInf() const
{
	cout << "Aquarium Name: " << name << endl;
	cout << "Capacity: " << capacity << endl;
	cout << "Fish count: " << getFishCount() << endl;
	cout << "Water level: " << waterLevel << endl;
}

void Aquarium::addFish(const string& fishName)
{
		fish.push_back(fishName);
		cout << fishName << " was added to the aquarium." << endl;	
}

void Aquarium::removeFish(const string&fishName)
{
	for (auto it = fish.begin(); it != fish.end(); ++it) {
		if (*it == fishName) {
			fish.erase(it);
			cout << fishName << " was removed from the aquarium." << endl;
			return;
		}
	}
	cout << fishName << " is not in the aquarium." << endl;
}

int Aquarium::getFishCount() const
{
	return fish.size();
}

void Aquarium::addWater(int amount)
{
	if (waterLevel + amount <= capacity) {
		waterLevel += amount;
		cout << "Added " << amount << " unit of the aquarium" << endl;

	}
	else
		cout << "Cannot add water. The aquarium will overflow" << endl;
}

void Aquarium::removeWater(int amount)
{
	if (waterLevel >= amount) {
		waterLevel -= amount;
		cout << "Removed " << amount << " unit of the water from aquarium" << endl;
	}
	else
		cout << "Not enough water in the aquarium to remove" << endl;
}

int Aquarium::getWaterLevel() const
{
	return waterLevel;
}

void Aquarium::addCoral(const Coral& coral)
{
	corals.push_back(coral);
}

void Aquarium::removeCoral(const Coral& coral)
{
	auto it = find(corals.begin(), corals.end(), coral);
	if (it != corals.end())
		corals.erase(it);
}

int Aquarium::getCoralCount() const
{
	return corals.size();
}

bool Aquarium::isCoralInAquarium() const
{
	return !corals.empty();
}

void Aquarium::printAquariumInfoCorals() const
{
	cout << "Aquarium information for corals:" << endl;
	cout << "Total corals: " << getCoralCount() << endl;
	cout << "Coral in aquarium: " << (isCoralInAquarium() ? "Yes" : "No") << endl;
	cout << "Colors of corals in aquarium:" << endl;
	for (const auto& coral : corals) {
		cout << "- " << coral.getColor() << endl;
	}
}

void Aquarium::addVeterianarian(const Veterinarian& veterinarian)
{
	veterinarians.push_back(veterinarian);
}

int Aquarium::getVeterinarianCount() const
{
	return veterinarians.size();
}



