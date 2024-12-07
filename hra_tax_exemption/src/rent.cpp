#include "rent.h"
using namespace HRAExemption;

Rent::Rent(double monthlyRent) : rent(monthlyRent)
{
	rent = monthlyRent * monthsInYear;
}

double Rent::getRent()
{
    return this->rent;
}
