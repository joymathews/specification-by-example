cmake_minimum_required(VERSION 3.10)
project(HraTaxExemptionCalculator VERSION 1.0.0)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add the library
add_library(hra_tax_exemption SHARED src/exemption_calculator.cpp src/salary.cpp src/rent.cpp)

# Specify include directories
target_include_directories(hra_tax_exemption PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

#for local build in container
if(DEFINED ENV{VCPKG_ROOT})
    include($ENV{VCPKG_ROOT}/scripts/buildsystems/vcpkg.cmake)
endif()

# Add Google Test
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Add the test executable
add_executable(excemption_tests tests/excemption_tests.cpp)
add_executable(salary_tests tests/salary_tests.cpp)
add_executable(rent_tests tests/rent_tests.cpp)

# Link the test executable with Google Test and the main library
target_link_libraries(excemption_tests ${GTEST_LIBRARIES} pthread hra_tax_exemption)
target_link_libraries(salary_tests ${GTEST_LIBRARIES} pthread hra_tax_exemption)
target_link_libraries(rent_tests ${GTEST_LIBRARIES} pthread hra_tax_exemption)

# Enable testing
enable_testing()

# Add the test
add_test(NAME excemption_tests COMMAND excemption_tests)
add_test(NAME salary_tests COMMAND salary_tests)
add_test(NAME rent_tests COMMAND rent_tests)