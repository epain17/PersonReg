#include "stdafx.h"
#include "Person.h"
#include <iostream>


Person::Person(std::string Name, std::string Adress)
{
	this->Name = Name;
	this->Adress = Adress;
}

void Person::PrintPerson()
{
	std::cout << "Persons Name" << Name << std::endl;
	std::cout << "Persons Adress" << Adress << std::endl;
	std::cout << "" << std::endl;

}

Person::~Person()
{
}
