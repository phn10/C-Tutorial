#include <iostream>
#include <string>
#include "Employee.h"

Employee::Employee(std::string n, int i, std::string d, std::string p)
{
	name = n;
	id = i;
	department = d;
	position = p;
}

Employee::Employee(std::string n, int i)
{
	name = n;
	id = i;
	department = " ";
	position = " ";
}

Employee::Employee()
{
	name = " ";
	id = 0;
	department = " ";
	position = " ";
}

void Employee::setName(std::string n)
{
	name = n;
}

std::string Employee::getName()
{
	return name;
}

void Employee::setID(int i)
{
	id = i;
}

int Employee::getID()
{
	return id;
}

void Employee::setDepart(std::string d)
{
	department = d;
}

std::string Employee::getDepart()
{
	return department;
}

void Employee::setPosi(std::string p)
{
	position = p;
}

std::string Employee::getPosi()
{
	return position;
}
