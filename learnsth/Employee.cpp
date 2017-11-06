#include <iostream>
using std::cout;

#include "Employee.h"

Employee::Employee(const string &first, const string &last, const string &ssn)
	: firstName(first), lastName(last), socialSecurityNumber(ssn)
{
}

Employee::~Employee()
{
}

void Employee::print() const
{
}

void Employee::setFirstName(const string &first)
{
	firstName = first;
}

string Employee::getFirstName() const
{
	return firstName;
}

void Employee::setLastName(const string &last)
{
	lastName = last;
}
string Employee::getLastName() const
{
	return lastName;
}

void Employee::setSocialSecurityNumber(const string &ssn)
{
	socialSecurityNumber = ssn; // should validate 
}

string Employee::getSocialSecurityNumber() const
{
	return socialSecurityNumber;
}