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
	map<int, string> readMap;
	StopWatch S;

	int i = 0;
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
		//readMap[i] = word; // for map
		//i++;
	}
	S.stop();
	cout << S.seconds() << " seconds to read through." << endl;
}