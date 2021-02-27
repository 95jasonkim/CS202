/*
Jason Kim
cs202 hw3 token main
*/
#include"token.hpp"
using std::cout;
using std::endl;
#include<fstream>
using std::ifstream;
using std::string;
using std::getline;
using std::vector;
#include<chrono>

int main(int argc, char** argv)
{
	string name = argv[1];
	ifstream ifs(name);
	printTokens(cout, readLines(ifs));
}