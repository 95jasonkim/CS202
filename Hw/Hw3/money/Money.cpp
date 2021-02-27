/*
Jason Kim
CS202 hw3 money class cpp
*/
#include "Money.hpp"
#include<iomanip>

Money::Money()
{
}

Money::Money(int amount): _amount { amount }
{
}

Money::Money(const Money& M) : _amount{ M._amount }
{
}

std::ostream& operator<<(std::ostream& os, const Money& M)
{
	double dollars = M._amount / 100.0;
	if (dollars < 0)
	{
		dollars *= -1;
		return os << "-$" << std::fixed << std::setprecision(2) << dollars;
	}
	else return os << "$" << std::fixed << std::setprecision(2)<< dollars;
}


bool operator==(const Money& Mlhs, const Money& Mrhs)
{
	return Mlhs._amount == Mrhs._amount;
}

bool operator!=(const Money& Mlhs, const Money& Mrhs)
{
	return Mlhs._amount != Mrhs._amount;
}