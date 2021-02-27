/*
Jason Kim
CS202 hw3 money class cpp
*/
#include "Money.hpp"

Money::Money()
{
}

Money::Money(int amount): _amount { amount }
{
}

Money::Money(const Money& M) : _amount{ M._amount }
{
}
