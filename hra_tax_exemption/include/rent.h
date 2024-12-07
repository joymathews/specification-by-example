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
		explicit Rent(double monthlyRent);
		double getRent() const;
	};
}
#endif // RENT_H