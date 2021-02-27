/*
Jason kim
cs202 hw3 token
*/
#include"token.hpp"
#include<iostream>
#include<string>
using std::getline;
using std::string;
#include<vector>
using std::vector;
#include<sstream>
using std::stringstream;

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

vector<TokenAndPosition> readLines(std::istream& is);

void printTokens(std::ostream& os, const vector<TokenAndPosition>& tokens);



