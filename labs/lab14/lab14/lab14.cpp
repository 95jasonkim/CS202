/*
CS202 lab14
jason kim
*/
#include<iostream>
using std::cout;
using std::endl;
#include<string>
using std::string;

template<typename T>
T twice(T t)
{
	return t + t;
}

string twice(const char* c)
{
	return twice(string(c));
}

int main()
{
	cout << twice(2) << endl;
	cout << twice(2.3) << endl;
	cout << twice(string("Hello")) << endl;
	cout << twice("Hello") << endl;
}