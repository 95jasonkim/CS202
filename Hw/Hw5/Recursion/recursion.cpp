/*
CS202 hw5 recursion.cpp
*/
#include<iostream>
using std::cout;
using std::endl;
#include<chrono>

int fib(int n)
{
	if (n == 0 || n == 1) { return n; }
	return fib(n - 2) + fib(n - 1);
}

int fib_loop(int n)
{
	if (n == 0 || n == 1) return n;
	int j=0;
	int k=1;
	int h=0;
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

int ack(int m, int n)
{
	if (m == 0) return n + 1;
	else if (n == 0) return ack(m - 1, 1);
	else return ack(m - 1, ack(m, n - 1));
}

int main()
{
	//fib example
	//cout << "fib\t fib_loop" << endl;
	//int max = 30;
	//for (int i = 0; i <= max; i++)
	//{
	//	cout << fib(i) << "\t " << fib_loop(i) << endl;
	//}
	int i = 3;
	int j = 9;
	auto start = std::chrono::high_resolution_clock::now();
	//test function
	ack(i,j);
	auto stop = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);
	cout << "It took "<<duration.count() <<" microseconds."<<endl;
}