/*
Jason Kim
CS202 lab4
*/

#include<iostream>
using std::cout;
using std::endl;
using std::cin;
#include<fstream>
#include<string>
using std::string;
using std::getline;
#include<sstream>
using std::stringstream;

int main()
{
	std::ifstream fin("Text.txt");
	string line;
	while (fin)
	{
		getline(fin, line);
		cout << line << endl;
	}
	cout << "Enter a number and some text: ";
	string input;
	getline(cin, input);
	stringstream sin(input);
	int num;
	string text;
	sin >> num;
	while (sin)
	{
		string word;
		sin >> word;
		text += word+" ";
	}

	//cout << num << text;
	std::ofstream fout("Text.txt", std::ios::app);
	for (int i = 0; i < num; i++)
	{
		fout << text << endl;
	}
}