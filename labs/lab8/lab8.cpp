/*
Jason Kim
CS202 lab8
*/
#include<iostream>
using std::cout;
using std::endl;
#include"lab2class.hpp"

int addN(int i)
{
	static int sum=0;
	sum += i;
	return sum;
}

int main()
{
	for (int i = 0; i <= 10; i++)
	{
		cout << addN(i) << endl;
	}
	Lab a;
	cout << Lab::getNum() << endl;
	Lab b(0, 1);
	cout << Lab::getNum() << endl;
	Lab c = a;
	cout << Lab::getNum() << endl;
}