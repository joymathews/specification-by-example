#include <gtest/gtest.h>
#include "salary.h" 
using namespace HRAExemption;
namespace HRAExemptionTests {


	//Feature: The system should store monthly basic salary and HRA and return the yearly basic salary, yearly HRA, 40% of basic salary, 50% of basic salary, 10% of basic salary.

	// Scenario: Salary percentage Forty Percentage
	//
	// Given monthly basic salary and HRA,
	// When a Salary class object is created with this information
	// Then 40% of basic salary per year must be returned
	TEST(Salary, FortyPercentage) {
		Salary salary(100, 40);
		EXPECT_EQ(salary.getFortyPercentOfBasicSalary(), (100 * 12) * 0.4);
	}

	// Scenario: Salary percentage Fifty Percentage
	// 
	// Given monthly basic salary and HRA,
	// When a Salary class object is created with this information
	// Then 50% of basic salary must be returned
	TEST(Salary, FiftyPercentage) {
		Salary salary(100, 50);
		EXPECT_EQ(salary.getFiftyPercentOfBasicSalary(), (100 * 12) * 0.5);
	}

	// Scenario: Salary percentage Ten Percentage
	//
	// Given monthly basic salary and HRA,
	// When a Salary class object is created with this information
	// Then 10% of basic salary must be returned
	TEST(Salary, TenPercentage) {
		Salary salary(100, 10);
		EXPECT_EQ(salary.getTenPercentOfBasicSalary(), (100 * 12) * 0.1);
	}

	// Scenario: Retrieve HRA
	//
	// Given monthly basic salary and HRA,
	// When a Salary class object is created with this information
	// Then hra per year must be returned
	TEST(Salary, RetrieveHRA) {
		Salary salary(100, 40);
		EXPECT_EQ(salary.getHRA(), 40 * 12);
	}
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}