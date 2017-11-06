#pragma once
#include "SalariedEmployee.h"
class StaffEmployee :
	public SalariedEmployee
{
public:
	StaffEmployee();
	~StaffEmployee();
	virtual void printIdentity();
};

