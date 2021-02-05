/*
Jason Kim
CS202 Hw1
TimeIt2
*/
#include"StopWatch.hpp"
#include<iostream>
using std::endl;
using std::cout;
#include<string>
using std::string;
#include<fstream>
using std::ifstream;
#include<vector>
using std::vector;
#include<list>
using std::list;
#include<map>
using std::map;
#include<algorithm>


int main()
{
	string book1 = "Alice.txt";
	string book2 = "Dracula.txt";
	string book3 = "Peter Pan.txt";
	string book4 = "Treasure Island.txt";
	string book5 = "Twilight of the souls.txt";
	string book = book1;
	ifstream fin(book);
	vector<string> readVector;
	list<string> readList;
	map<string, string> readMap;
	StopWatch S;
	
	S.start();
	while (true)
	{
		string word;
		fin >> word;
		if (!fin)
		{
			if (fin.eof()) break;
			else
			{
				cout << "Unexpected error." << endl;
				break;
			}
		}
		readVector.push_back(word); //for vector
		//readList.push_back(word); //for list
		//readMap[word] = word; // for map
	}
	S.stop();
	cout << S.seconds() << " seconds to read through." << endl;

	S.start();
	string findThis = "Gutenburg";
	auto it = std::find(readVector.begin(), readVector.end(), findThis); // for searching through vector
	//auto it2 = std::find(readList.begin(), readList.end(), findThis); // for searching through list
	//auto it3 = readMap.find(findThis); // for searching through map
	S.stop();
	cout << S.seconds() << " seconds to find an element." << endl;

	S.start();
	std::sort(readVector.begin(), readVector.end()); // for sorting through vector
	//readList.sort(); // for sorting through list
	//no sorting for map
	S.stop();
	cout << S.seconds() << " seconds to sort container." << endl;
}