#include "pch.h"
#include "Veterinarian.h"

Veterinarian::Veterinarian(const string& names, int experiences)
{
	name = names;
	experience = experiences;
}

void Veterinarian::setName(const string& names)
{
	name = names;
}

string Veterinarian::getName() const
{
	return name;
}

void Veterinarian::setExperience(int experiences)
{
	experience = experiences;
}

int Veterinarian::getExperience() const
{
	return experience;
}

void Veterinarian::treatAnimal(const string& animal)
{
	cout << "Veterinarian " << name << " treats an animal " << animal << endl;
}

void Veterinarian::getInfo() const
{

	cout << "Name: "<< name << endl;
	cout << "Experience: " << experience << " years" << endl;

}








