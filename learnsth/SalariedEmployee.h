#pragma once
#include "Employee.h"
class SalariedEmployee :
	public Employee
{
public:
	SalariedEmployee() {};
	SalariedEmployee(const string &, const string &, const string &);
	~SalariedEmployee();

	virtual double earnings() const;
	virtual void print() const;
	virtual void printIdentity();
};

