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

int fib_loop(int n)
{
	int j=0;
	int k=1;
	int h;
	for (int i = 0; i<=n ; i++)
	{
		if (i > 1)
		{
			h = j + k;
			j = k;
			k = h;
		}
	}
	return h;
}

int main()
{
	cout << fib_loop(7) << endl;
}