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
		double calculateActualRentMinusTenPercentageBasicSalary() const;
		double calculateBasicSalaryExemption() const;
	public:
		ExemptionCalculator(const Salary&  salary, Rent rent, bool livingInMetroCity);
		double calculateExemption() const;
	};
}

#endif // EXEMPTION_CALCULATOR_H