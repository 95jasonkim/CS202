/*
Jason Kim
CS202 hw0
*/
#include<iostream>
using std::cout;
using std::endl;
#include<string>
using std::string;
#include<fstream>
using std::ifstream;


int main()
{
	string line;
	ifstream file("peterpan.txt");
	if (!file) cout << "Error opening file" << endl;
	while (true)
	{
		std::getline(file, line);
		if (!file)
		{
			if (file.eof())
			{
				cout << "Finished reading file" << endl;
				break;
			}
			else
			{
				cout << "Error reading file" << endl;
				break;
			}
		}
		cout << line << endl;
		
	}
}

