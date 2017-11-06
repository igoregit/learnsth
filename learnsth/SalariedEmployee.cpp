#include <iostream> 
using std::cout;
using std::endl;

#include "SalariedEmployee.h"

SalariedEmployee::SalariedEmployee(const string &first, const string &last, const string &ssn)
	: Employee(first, last, ssn)
{
}

SalariedEmployee::~SalariedEmployee()
{
}

double SalariedEmployee::earnings() const {
	return 0.0;
}

void SalariedEmployee::print() const
{
	cout << "salaried employee: ";
	Employee::print();

}

void SalariedEmployee::printIdentity()
{
	cout << "i'm a SALARIED_EMP" << endl;
}
