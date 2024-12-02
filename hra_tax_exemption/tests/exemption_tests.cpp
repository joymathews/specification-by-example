#include <gtest/gtest.h>
#include "excemption_calculator/exemption_calculator.h" // Adjust the include path as necessary

TEST(ExemptionCalculatorTest, BasicTest) {
    ExemptionCalculator calculator;
    // Replace with actual function calls and expected values
    EXPECT_EQ(calculator.calculateActualRentMinusTenPercentageBasicSalary(),2.0);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}