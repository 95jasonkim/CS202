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
public:
	Money();
	Money(int);
	Money(const Money& M);

private:
	int _amount=0.0;
};


#endif