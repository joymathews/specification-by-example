#ifndef RENT_H
#define RENT_H
namespace HRAExemption
{
	class Rent
	{
	private:
		double rent;
		const int monthsInYear = 12;
	public:
		Rent(double monthlyRent);
		double getRent();
	};
}
#endif // RENT_H