/*
Jason Kim
CS202 hw3 money class hpp
*/
#ifndef MONEY_HPP
#define MONEY_HPP
#include<iostream>

class Money
{
	friend std::ostream& operator<<(std::ostream&, const Money& M);
	friend bool operator==(const Money& Mlhs, const Money& Mrhs);
	friend bool operator!=(const Money& Mlhs, const Money& Mrhs);
	friend bool operator<(const Money& Mlhs, const Money& Mrhs);
	friend bool operator<=(const Money& Mlhs, const Money& Mrhs);
	friend bool operator>(const Money& Mlhs, const Money& Mrhs);
	friend bool operator>=(const Money& Mlhs, const Money& Mrhs);
	friend Money operator+(Money Mlhs, const Money& Mrhs);
	friend Money operator-(Money Mlhs, const Money& Mrhs);
	friend Money operator*(Money Mlhs, double d);
	friend Money operator*(double d, Money Mrhs);
	friend Money operator/(Money Mlhs, double d);
public:
	Money();
	Money(double);
	Money(int, int);
	Money(int);
	Money(const Money& M);
	Money& operator+=(const Money& M);
	Money& operator-=(const Money& M);
	Money& operator*=(double d);
	Money& operator/=(double d);

private:
	int _amount=0;
};


#endif