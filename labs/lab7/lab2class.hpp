#ifndef LABTWO_HPP
#define LABTWO_HPP
#include<iostream>
using std::cout;
using std::endl;
#include<ostream>
using std::ostream;

class Lab
{
	friend ostream& operator<<(ostream& os, const Lab& L);
public:
	Lab();
	Lab(const Lab& L);
	Lab(int a, int b);
	~Lab();

	void setOne(int a);
	void setTwo(int abc);
	int getSum() const;
	int getOne() const;
	int getTwo() const;
	Lab operator++(int);
private:
	int _one = 0;
	int _two = 0;
};



#endif 