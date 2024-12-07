#include"salary.h"
using namespace HRAExemption;

Salary::Salary(double monthlyBasicSalary, double monthlyHra) : yearlyBasicSalary(monthlyBasicSalary), yearlyHra(monthlyHra)
{
	yearlyBasicSalary = yearlyBasicSalary * monthsInYear;
	yearlyHra = yearlyHra * monthsInYear;
}
double Salary::getFortyPercentOfBasicSalary() const
{
	return yearlyBasicSalary * factorForPercentage;
}

double Salary::getFiftyPercentOfBasicSalary() const
{
	return yearlyBasicSalary * factorForFiftyPercentage;
}

double Salary::getTenPercentOfBasicSalary() const
{
	return yearlyBasicSalary * factorForTenPercentage;
}

double Salary::getHRA()
{
	return yearlyHra;
}