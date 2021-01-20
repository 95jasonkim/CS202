#ifndef LABTWO_HPP
#define LABTWO_HPP
#include<iostream>
using std::cout;
using std::endl;


class Lab
{
public:
	Lab();
	Lab(const Lab& L);
	Lab(int a, int b);
	~Lab();

	void setOne(int a);
	void setAsSum(int &ab);
	void setTwo(const int& abc);
	int getSum();
private:
	int _one, _two;
};


#endif 