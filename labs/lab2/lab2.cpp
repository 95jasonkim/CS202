/*
Jason Kim
CS202 lab2
*/
#include "lab2class.hpp"
#include<vector>
using std::vector;


int main()
{
	Lab a;
	Lab c(2, 3);

	a.setOne(5);
	int ab = 2;
	a.setTwo(ab);
	c.setAsSum(ab);

	Lab b = a;

	vector<Lab> vec{ a,b,c };
	Lab d(1, 0), e(4,3);
	vec.push_back(d);
	vec.push_back(e);
	int total =0;
	for (auto L : vec)
	{
		total += L.getSum();
	}
	cout << "Total sum of vector is " << total << endl;
}	