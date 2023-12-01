#include "pch.h"
#include "MarineInvertebrate.h"

MarineInvertebrate::MarineInvertebrate(const string& specie, const string& habitats, int aquariumId)
{
	species = specie;
	habitat = habitats;
	idAquarium = aquariumId;
}

string MarineInvertebrate::getSpecies()
{
	return species;
}

string MarineInvertebrate::getHabitat()
{
	return habitat;
}

int MarineInvertebrate::getIdAquarium()
{
	return idAquarium;
}

void MarineInvertebrate::setSpecies(const string& specie)
{
	species = specie;
}

void MarineInvertebrate::setHabitat(const string& habitats)
{
	habitat = habitats;
}

void MarineInvertebrate::setAquariumId(int aquariumId)
{
	idAquarium = aquariumId;
}

void MarineInvertebrate::displayInf() const
{
	cout << "Species: " << species << endl;
	cout << "Habitat: " << habitat << endl;
	cout << "Aquarium ID: " << idAquarium << endl;
}










