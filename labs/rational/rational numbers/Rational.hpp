/*
Jason Kim
CS202 rational class hpp
*/
#ifndef RATIONAL_HPP
#define RATIONAL_HPP
#include<iostream>

class Rational {
	friend std::ostream& operator<<(std::ostream&, const Rational& rhs);
	friend Rational operator+(const Rational& lhs, const Rational& rhs);
public:
	Rational(int, int = 1);
	Rational& operator+=(const Rational& rhs);
private:
	int _numerator;
	int _denominator;
};


#endif