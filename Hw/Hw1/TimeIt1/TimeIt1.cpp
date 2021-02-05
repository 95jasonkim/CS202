/*
Jason Kim
CS202 Time it 1
*/
#include "StopWatch.hpp"
#include <iostream>
using std::cout;
using std::endl;
#include<algorithm>
using std::search;
using std::binary_search;
using std::count;
using std::find;
#include<random>
using std::mt19937;
using std::random_device;
using std::uniform_int_distribution;
#include<vector>
using std::vector;


int main()
{
	StopWatch S;
	int size=100000000; // group size 
	random_device ran;
	mt19937 gen(ran());
	uniform_int_distribution<int> range(1, size);
	vector<int> vec;
	for (int i = 0; i < size; i++) vec.push_back(i);
	cout << "For group size: " << size << endl;
	for (int i = 0; i < 5; i++)
	{
		int item = range(gen);
		S.start();
		auto findIt = find(vec.begin(), vec.end(), item); // for find
		S.stop();
		cout << "find algorithm run, taking " << S.seconds() << " seconds" << endl;
	}
	cout << endl;
	for (int i = 0; i < 5; i++)
	{
		int item = range(gen);
		S.start();
		int counting = count(vec.begin(), vec.end(), item); // for count
		S.stop();
		cout << "count algorithm run, taking " << S.seconds() << " seconds" << endl;
	}
	cout << endl;
	for (int i = 0; i < 5; i++)
	{
		int item = range(gen);
		int item2[2] = { item,item + 1 };
		S.start();
		auto searchIt = search(vec.begin(), vec.end(), item2, item2 + 1); // for search
		S.stop();
		cout << "search algorithm run, taking " << S.seconds() << " seconds" << endl;
	}
	cout << endl;
	for (int i = 0; i < 5; i++)
	{
		int item = range(gen);
		S.start();
		bool binary = binary_search(vec.begin(), vec.end(), item); // for binary_search
		S.stop();
		cout << "binary_search algorithm run, taking " << S.seconds() << " seconds" << endl;
	}


}