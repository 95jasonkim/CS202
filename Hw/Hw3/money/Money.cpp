/*
Jason Kim
CS202 hw3 money class cpp
*/
#include "Money.hpp"
#include<iomanip>

Money::Money()
{
}

Money::Money(double dollar): _amount{(int)round(dollar * 100)}
{
}

Money::Money(int dollar, int cent): _amount { dollar*100+cent }
{
}

Money::Money(int cent) : _amount{ cent }
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

bool operator<(const Money& Mlhs, const Money& Mrhs)
{
	return Mlhs._amount < Mrhs._amount;
}

bool operator<=(const Money& Mlhs, const Money& Mrhs)
{
	return Mlhs._amount <= Mrhs._amount;
}

bool operator>(const Money& Mlhs, const Money& Mrhs)
{
	return Mlhs._amount > Mrhs._amount;
}

bool operator>=(const Money& Mlhs, const Money& Mrhs)
{
	return Mlhs._amount >= Mrhs._amount;
}

Money operator+(Money Mlhs, const Money& Mrhs)
{
	return Mlhs += Mrhs;
}

Money& Money::operator+=(const Money& M)
{
	_amount += M._amount;
	return *this;
}

Money operator-(Money Mlhs, const Money& Mrhs)
{
	return 	Mlhs -= Mrhs;
}

Money& Money::operator-=(const Money& M)
{
	_amount -= M._amount;
	return *this;
}

Money operator*(Money Mlhs, double d)
{
	return Mlhs *= d;
}
Money operator*(double d, Money Mrhs)
{
	return Mrhs *= d;
}

Money& Money::operator*=(double d)
{
	_amount = (int)round(_amount*d);
	return *this;
}

Money operator/(Money Mlhs, double d)
{
	return Mlhs /= d;
}


Money& Money::operator/=(double d)
{
	_amount = (int)round(_amount / d);
	return *this;
}