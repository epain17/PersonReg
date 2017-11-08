#include "stdafx.h"
#include "PersonRegister.h"
#include <string>
#include <iostream>


PersonRegister::PersonRegister(int maxSize)
{
	this->maxSize = maxSize;
	this->persons = new Person*[maxSize];
	this->counter = 0;
	this->searchInt = 0;
	this->searchString = searchString;
}

void PersonRegister::AddPerson(Person *person)
{
	for (int i = 0; i < maxSize; i++)
	{
		if (persons[i] == nullptr)
		{
			persons[i] = person;
			counter++;
			break;
		}

	}
}

void PersonRegister::RemovePerson(Person *person)
{
	for (int i = 0; i < counter; i++)
	{
		if (persons[i] == person)
		{
			delete persons[i];
			persons[i] = nullptr;
			--counter;
			break;

		}
	}
}

Person * PersonRegister::SearchPerson(std::string searchString, Person *person)
{
	for (int i = 0; i < counter; i++)
	{
		if (persons[i]->Name.find(searchString) != std::string::npos ||
			persons[i]->Adress.find(searchString) != std::string::npos)
		{
			if (persons[i] != person)
			{
				persons[i]->PrintPerson();
				searchInt = i;
				SearchPerson(searchString, persons[searchInt]);
				return persons[i];
			}
		}
	}
	searchInt = 0;
	return nullptr;
}



PersonRegister::~PersonRegister()
{
}
