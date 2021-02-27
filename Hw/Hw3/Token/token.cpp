/*
Jason kim
cs202 hw3 token
*/
#include"token.hpp"
#include<iostream>
using std::cout;
using std::endl;
#include<string>
using std::getline;
using std::string;
#include<vector>
using std::vector;
#include<sstream>
using std::stringstream;
#include<iomanip>
using std::setw;

vector<string> lineToTokens(const std::string& line)
{
	stringstream ss(line);
	string word;
	vector<string> tokens;
	while (ss)
	{
		ss >> word;
		if (ss)
		{
			tokens.push_back(word);
		}
	}
	return tokens;
}

vector<TokenAndPosition> readLines(std::istream& is)
{
	vector<TokenAndPosition> vec;
	int lineNum = 0;
	while(is)
	{
		string line;
		getline(is, line);
		lineNum++;
		vector<string> tokens = lineToTokens(line);
		if (!tokens.empty())
		{
			for (auto item : tokens)
			{
				auto col = line.find(item);
				line.replace(col, item.length(), " ", item.length());
				TokenAndPosition tap = { item, lineNum, col+1 };
				vec.push_back(tap);
			}
		}
	}
	return vec;
}

