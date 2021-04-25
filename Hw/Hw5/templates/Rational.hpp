#ifndef TEMPLATE_RATIONAL_HPP
#define TEMPLATE_RATIONAL_HPP

#include <iostream>
#include <numeric>

template<typename T>
class Rational
{
	template<typename F>
	friend std::ostream& operator<<(std::ostream&, const Rational<F>& rhs);

	template<typename F>
	friend Rational<F> operator+(const Rational<F>& lhs, const Rational<F>& rhs);
	
	template<typename F>
	friend Rational<F> operator-(const Rational<F>& lhs);
	
	template<typename F>
	friend bool operator==(const Rational<F>& lhs, const Rational<F>& rhs);
	
	template<typename F>
	friend bool operator<(const Rational<F>& lhs, const Rational<F>& rhs);

public:
	Rational();
	Rational(const T&);
	Rational(const T&, const T &); //NOLINT(google-explicit-constructor): Allow implicit conversion from int

	Rational<T>& operator+=(const Rational<T>& rhs);
	Rational<T>& operator-=(const Rational<T>& rhs);
	Rational<T>& operator*=(const Rational<T>& rhs);
	Rational<T>& operator/=(const Rational<T>& rhs);
	Rational<T>& operator++();        //prefix ++
	Rational<T> operator++(int); //postfix ++
	Rational<T>& operator--();        //prefix --
	Rational<T> operator--(int); //postfix --
private:
	void reduce();

	T _numerator;
	T _denominator;
};

template<typename T>
Rational<T>::Rational() {
	_numerator = (T)0;
	_denominator = (T)1;
}

template<typename T>
Rational<T>::Rational(const T& num) :_numerator(num){
	_denominator = (T)1;
}

template<typename T>
Rational<T>::Rational(const T& num, const T& den) : _numerator(num), _denominator(den) {
	reduce();
}

template<typename F>
std::ostream& operator<<(std::ostream& os, const Rational<F>& rhs) {
	os << rhs._numerator;
	if (rhs._denominator != 1)
		os << "/" << rhs._denominator;
	return os;
}


template<typename R>
Rational<R>& Rational<R>::operator+=(const Rational<R>& rhs) {
	// a/b + c/d = (ad+bc)/ad
	_numerator = _numerator * rhs._denominator + rhs._numerator * _denominator;
	_denominator *= rhs._denominator;
	reduce();
	return *this;
}

template<typename F>
Rational<F> operator+(const Rational<F>& lhs, const Rational<F>& rhs) { //canonical
	auto temp{ lhs };
	temp += rhs;
	return temp;
}

template<typename R>
void Rational<R>::reduce() {
	auto gcd = std::gcd(_numerator, _denominator);
	_numerator /= gcd;
	_denominator /= gcd;
	if (_denominator < 0) {
		_numerator *= -1;
		_denominator *= -1;
	}
}

template<typename F>
Rational<F> operator-(const Rational<F>& lhs) {
	return { -lhs._numerator, lhs._denominator };
}

template<typename F>
Rational<F> operator-(const Rational<F>& lhs, const Rational<F>& rhs) {
	return lhs + -rhs;
}

template<typename R>
Rational<R>& Rational<R>::operator-=(const Rational<R>& rhs) { //Canonical
	*this = *this - rhs; //uses Rational::operator- to define operator-=
	return *this;
}

template<typename R>
Rational<R>& Rational<R>::operator*=(const Rational<R>& rhs) {
	_numerator *= rhs._numerator;
	_denominator *= rhs._denominator;
	return *this;
}

template<typename R>
Rational<R>& Rational<R>::operator/=(const Rational<R>& rhs) {
	return *this *= {rhs._denominator, rhs._numerator};
}

// pass lhs by value because we were going to copy it anyway
template<typename R>
Rational<R> operator*(Rational<R> lhs, const Rational<R>& rhs) { //Canonical
	return lhs *= rhs;
}

// pass lhs by value because we were going to copy it anyway
template<typename R>
Rational<R> operator/(Rational<R> lhs, const Rational<R>& rhs) { //Canonical
	return lhs /= rhs;
}

template<typename R>
Rational<R>& Rational<R>::operator++() {//prefix ++
	return *this += 1;
}

template<typename R>
Rational<R> Rational<R>::operator++(int) {//postfix ++
	auto copy{ *this };
	++(*this);
	return copy;
}

template<typename R>
Rational<R>& Rational<R>::operator--() {//prefix --
	return *this -= 1;
}

template<typename R>
Rational<R> Rational<R>::operator--(int) {//postfix --
	auto copy{ *this };
	--(*this);
	return copy;
}

template<typename F>
bool operator==(const Rational<F>& lhs, const Rational<F>& rhs) {
	return lhs._numerator == rhs._numerator && lhs._denominator == rhs._denominator;
}

template<typename F>
bool operator<(const Rational<F>& lhs, const Rational<F>& rhs) {
	return lhs._numerator * rhs._denominator < rhs._numerator* lhs._denominator;
}

template<typename R>
bool operator!=(const Rational<R>& lhs, const Rational<R>& rhs) {//canonical
	return !(rhs == lhs);
}

template<typename R>
bool operator>(const Rational<R>& lhs, const Rational<R>& rhs) {//canonical
	return rhs < lhs;
}

template<typename R>
bool operator<=(const Rational<R>& lhs, const Rational<R>& rhs) {//canonical
	return !(rhs > lhs);
}

template<typename R>
bool operator>=(const Rational<R>& lhs, const Rational<R>& rhs) {//canonical
	return !(rhs < lhs);
}
#endif