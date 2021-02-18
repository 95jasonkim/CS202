/*
Jason Kim
CS202 lab9
*/
#include<iostream>
using std::cout;
using std::endl;
#include"complex.hpp"

int main()
{
	cout << 1 + Complex(2, 3) << endl;
	cout << Complex(1.33) << endl;
	Complex test(3.3, 5.5);
	test += 5.5;
	cout << test << endl;
}