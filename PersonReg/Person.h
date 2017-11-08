#ifndef PERSON_H
#define PERSON_H
#include <string>
class Person
{
public:
	std::string Name;
	std::string Adress;

	Person(std::string Name, std::string Adress);

	virtual void PrintPerson();


	virtual~Person();
};

#endif