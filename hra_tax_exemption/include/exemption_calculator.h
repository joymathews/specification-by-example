#ifndef EXEMPTION_CALCULATOR_H
#define EXEMPTION_CALCULATOR_H

#include "salary.h"
#include "rent.h"

namespace HRAExemption
{
	class ExemptionCalculator
	{
	private:
		Salary salaryDetails;
		Rent rentDetails;
		bool metroCity;
		double calculateActualRentMinusTenPercentageBasicSalary();
		double calculateBasicSalaryExemption();
	public:
		ExemptionCalculator(const Salary&  salary, Rent rent, bool livingInMetroCity);
		double calculateExemption();
	};
}

#endif // EXEMPTION_CALCULATOR_H