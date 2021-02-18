/*
Jason Kim
Cs202 lab9 cpp
*/
#include "complex.hpp"

Complex::Complex(double real, double imag) :_real(real), _imag(imag)
{
}

std::ostream& operator<<(std::ostream &os, const Complex& num)
{
	if(num._imag==0) return os << num._real;
	else  return os << num._real << " + " << num._imag << "i";
}

Complex operator+(const Complex& one, const Complex& two)
{
	auto temp{ one };
	temp += two;
	return temp;
}


Complex& Complex::operator+=(const Complex& num)
{
	_real += num._real;
	_imag += num._imag;
	return *this;
}