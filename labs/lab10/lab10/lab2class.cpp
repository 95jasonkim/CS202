/**/
#include "lab2class.hpp"
#include<stdexcept>

Lab::Lab()
{
	cout << "Called default constructor" << endl;
	_num++;
	if (_num > 5)
	{
		throw std::runtime_error("More than 5 Lab objects have been created");
	}
}

Lab::Lab(const Lab& L):_one(L._one), _two(L._two)
{
	cout << "Called copy constructor" << endl;
	_num++;	
	if (_num > 5)
	{
		throw std::runtime_error("More than 5 Lab objects have been created");
	}
}

Lab::Lab(int a, int b):_one(a), _two(b)
{
	cout << "Called constructor with parameters" << endl;
	_num++;
	if (_num > 5)
	{
		throw std::runtime_error("More than 5 Lab objects have been created");
	}
}

Lab::~Lab()
{
	cout << "Called destructor" << endl;
	_num--;
}

void Lab::setOne(int a)
{
	cout << "one is now " << a<< endl;
	_one = a;
}

int Lab::getSum() const
{
	return _one+_two;
}

void Lab::setTwo(int abc)
{
	cout << "two is now " << abc << endl;
	_two = abc;
}

int Lab::getOne() const
{
	return _one;
}

int Lab::getTwo() const
{
	return _two;
}

int Lab::_num = 0;

int Lab::getNum()
{
	return _num;
}