/**/
#include "lab2class.hpp"
#include<iostream>
using std::cout;
using std::endl;

Lab::Lab()
{
	cout << "Called default constructor" << endl;
}

Lab::Lab(const Lab& L):_one(L._one), _two(L._two)
{
	cout << "Called copy constructor" << endl;
}

Lab::Lab(int a, int b):_one(a), _two(b)
{
	cout << "Called constructor with parameters" << endl;
}

Lab::~Lab()
{
	cout << "Called destructor" << endl;
}
