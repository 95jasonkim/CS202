/*
Jason Kim
Cs202 lab9 hpp
*/
#ifndef COMPLEX_HPP
#define COMPLEX_HPP
#include<iostream>

class Complex
{
	friend std::ostream& operator<<(std::ostream&, const Complex& num);
	friend Complex operator+(const Complex& one, const Complex& two);
public:
	Complex(double, double = 0.0);
	Complex& operator+=(const Complex& num);
private:
	double _real, _imag;
};

#endif