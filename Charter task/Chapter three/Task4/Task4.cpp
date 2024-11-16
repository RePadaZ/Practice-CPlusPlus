#include <iostream>

using namespace std;

int main() {
	struct Employee {
		int Number;
		float Salary;
	};
	Employee EmployeeOne;
	Employee EmployeeTwo;
	Employee EmployeeThre;

	cout << "Enter number first employee and salary: ";
	cin >> EmployeeOne.Number >> EmployeeOne.Salary;

	cout << "Enter number second employee and salary: ";
	cin >> EmployeeTwo.Number >> EmployeeTwo.Salary;

	cout << "Enter number third employee and salary: ";
	cin >> EmployeeThre.Number >> EmployeeThre.Salary;

	cout << "First employee: " << EmployeeOne.Number << " " << EmployeeOne.Salary << endl;
	cout << "Second employee: " << EmployeeTwo.Number << " " << EmployeeTwo.Salary << endl;
	cout << "Third employee: " << EmployeeThre.Number << " " << EmployeeThre.Salary << endl;
}