/*
Jason Kim
CS202 lab16
*/
#include<iostream>
using std::cout;
using std::endl;
#include<algorithm>
using std::unique;
using std::find_first_of;
#include<vector>
using std::vector;

void print(vector<int> v)
{
	for (auto item : v)
	{
		cout << item << " ";
	}
	cout << endl;
}

int main()
{
	//std::unique
	vector<int> v{ 1,1,2,4,3,3,2,4 };
	print(v);
	auto last = unique(v.begin(), v.end());
	print(v);
	v.erase(last, v.end());
	print(v);
	std::sort(v.begin(), v.end());
	last = unique(v.begin(), v.end());
	v.erase(last, v.end());
	print(v);

	//std::find_first_of
	vector<int> r{ 5,6,4,0 };
	auto find = find_first_of(v.begin(), v.end(), r.begin(), r.end());
	cout << "Found match at position: "<<std::distance(v.begin(), find) << endl;
}