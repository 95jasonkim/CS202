/*
CS202 hw5 recursion.cpp
*/
#include<iostream>
using std::cout;
using std::endl;

int fib(int n)
{
	if (n == 0 || n == 1) { return n; }
	return fib(n - 2) + fib(n - 1);
}


int main()
{
	cout << fib(7) << endl;
}