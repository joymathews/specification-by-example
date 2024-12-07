#include "rent.h"
using namespace HRAExemption;

Rent::Rent(double monthlyRent) : rent(monthlyRent)
{
    rent *= monthsInYear;
}

double Rent::getRent() const
{
    return this->rent;
}
