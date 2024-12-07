#include "rent.h"
using namespace HRAExemption;

Rent::Rent(double monthlyRent) : rent(monthlyRent * monthsInYear)
{
}

double Rent::getRent() const
{
    return this->rent;
}
