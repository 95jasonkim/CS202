/*
Jason Kim
CS202 Hw2
Linked List
*/

#include"catch.hpp"
#include<iostream>
#include<list>
using std::list;

class Value {
public:
	void queue(int i)
	{
		_test.push_back(i);
		_test.pop_front();
	}


private:
	list<int> _test = { 1,2,3,4 };
};

