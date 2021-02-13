/*
Jason Kim
CS202 Hw2
Linked List
*/

#include"catch.hpp"
#include<iostream>
#include<list>
using std::list;
#include<algorithm>


class Value {
public:
	void queue(int i)
	{
		_test.push_back(i);
		_test.pop_front();
	}
	void stack(int i)
	{
		_test.push_back(i);
		_test.pop_back();
	}
	void insertNFind(int i)
	{
		auto it = std::find_if(_test.begin(), _test.end(), [i](int j) {return i < j; });
		_test.insert(it, i);
	}

private:
	list<int> _test = { 1,2,3,4 };
};

