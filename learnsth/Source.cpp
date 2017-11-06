#include <iostream> 
using std::cout;
using std::endl;
using std::fixed;

#include <iomanip>
using std::setprecision;

#include <vector>
using std::vector;
using std::runtime_error;

#include <typeinfo>

#include "Employee.h"
#include "SalariedEmployee.h"
#include "StaffEmployee.h"

void virtualViaPointer(const Employee * const);
void virtualViaReference(const Employee &);

void virtualViaPointer(const Employee * const baseClassPtr)
{
	baseClassPtr->print();
	cout << "\nearned $" << baseClassPtr->earnings() << endl << endl;
}

void virtualViaReference(const Employee &baseClassRef)
{
	baseClassRef.print();
	cout << "\nearned $" << baseClassRef.earnings() << endl << endl;
}

int main() {
	cout << fixed << setprecision(2);

	SalariedEmployee salariedEmployee( "John", "Smith", "11 - 11 - 1111" );

	vector < Employee * > employees(1);
	employees[0] = &salariedEmployee;

	cout << "Employees processed polymorphically via dynamic binding:" << endl << endl ; 
		
	cout << "Virtual function calls made off base-class pointers:" << endl << endl ; 
	
	for ( size_t i = 0; i < employees.size(); i++ )
		virtualViaPointer( employees[0] );
	
	cout << "Virtual function calls made off base-class references:" << endl << endl ;

	for (size_t i = 0; i < employees.size(); i++)
		virtualViaReference( *employees[0] );

	SalariedEmployee salEmp = SalariedEmployee();
	StaffEmployee stEmp = StaffEmployee();

	StaffEmployee * stEmpPtr = static_cast <StaffEmployee*> (&salEmp);
	stEmpPtr->printIdentity();

	cout << "typeinfo object: " << typeid(*employees[0]).name() << endl;
	
	try {

		delete employees[0];
	}
	catch ( const std::string& what_arg ) {
		cout << what_arg << endl;
		
	}


	system("pause");

	return 0;
}