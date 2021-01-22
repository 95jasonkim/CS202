/*
Jason Kim
CS202 lab2
*/
#include "lab2class.hpp"
#include<vector>
using std::vector;

void passValue(Lab l)
{
	cout << "The sum is " << l.getSum() << endl;
}

void passRef(Lab &l)
{
	l.setOne(0);
	l.setTwo(0);
	cout << "Both values set to 0" << endl;
}

Lab passConstRef(const Lab &l)
{
	Lab reverse(l.getTwo(), l.getOne());
	return reverse;
}

int main()
{
	Lab a;
	Lab c(2, 3);

	a.setOne(5);
	a.setTwo(6);

	Lab b = a;
	cout << endl;
	passValue(a);
	Lab d = passConstRef(c);
	Lab e;
	passRef(e);


	cout << "Creating Vector..." << endl;
	vector<Lab> vec{ a,b,c,d,e };
	cout << "Finished creating vector" << endl;

}	