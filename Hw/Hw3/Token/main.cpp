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

int main(int argc, char** argv)
{
	string name = argv[1];
	ifstream ifs(name);
	string line;
	if (ifs.is_open())
	{
		while (getline(ifs, line))
		{
			vector<string> s = lineToTokens(line);
			for (auto item : s)
			{
				cout << item << endl;
			}
		}
		ifs.close();
	}
}