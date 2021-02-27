/*
jason kim
cs202 token hpp
*/
#ifndef TOKEN_HPP
#define TOKEN_HPP
#include<iostream>
#include<string>
#include<vector>

struct TokenAndPosition
{
	std::string _token;
	int _line;
	unsigned int _column;
};
std::vector<std::string> lineToTokens(const std::string & line);
std::vector<TokenAndPosition> readLines(std::istream& is);
void printTokens(std::ostream& os, const std::vector<TokenAndPosition>& tokens);


#endif
