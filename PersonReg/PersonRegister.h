#ifndef PERSONREGISTER_H
#define PERSONREGISTER_H
#include <string>
#include "Person.h"
class PersonRegister
{
public:

	int maxSize;
	int counter;
	int searchInt;
	std::string searchString;

	Person ** persons;
	
	PersonRegister(int maxSize);
	
	void AddPerson(Person * person);

	void RemovePerson(Person *person);

	Person* SearchPerson(std::string searchString, Person * person);

	void PrintRegister();

	void CleanRegister();


	~PersonRegister();
};

#endif