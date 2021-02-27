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
public:
	Money();
	Money(int);
	Money(const Money& M);
	Money& operator+=(const Money& M);
	Money& operator-=(const Money& M);

private:
	int _amount=0;
};


#endif