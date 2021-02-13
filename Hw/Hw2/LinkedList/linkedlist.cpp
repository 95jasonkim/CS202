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
	void print()
	{
		for (auto item : _test) std::cout << item << " ";
		std::cout << std::endl;
	}

	list<int> _test = { 1,2,3,4 };
};

TEST_CASE("Class Value for usage of Linked Lists", "[Value]")
{
	Value test;
	test.print();
	SECTION("Queue, push_back and pop_front")
	{
		test.queue(5);
		REQUIRE(test._test.back() == 5);
		REQUIRE(test._test.front() != 1);
		test.print();
	}

	SECTION("Stack, push_back and pop_back")
	{
		test.stack(5);
		REQUIRE(test._test.back() != 5);
		test.print();
	}

	SECTION("Insert and Find, insert number 3 in appropriate position")
	{
		test.insertNFind(3);
		list<int> l = { 1,2,3,3,4 };
		REQUIRE(test._test == l);
		test.print();
	}
	std::cout << std::endl;
}