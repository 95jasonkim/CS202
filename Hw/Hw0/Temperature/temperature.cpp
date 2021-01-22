/*
Jason Kim
CS 202 Hw0
*/
#include<iostream>
using std::cout;
using std::endl;
#include<string>
using std::strtod;
using std::stod;
using std::strcmp;

double cpp_ftoc(const char* str)
{
	return (stod(str) - 32) * 5 / 9;
}

double cpp_ctof(const char* str)
{
	return strtod(str,NULL) * 9 / 5 + 32;
}

int main(int argc, char **argv)
{
	if (!strcmp(argv[1], "temperature"))
	{
		if (!strcmp(argv[2],"--ftoc"))
		{
			cout << argv[3] << " Fahrenheit converted to Celsius is: " << cpp_ftoc(argv[3]) << " Celsius"<<endl;
		}
		else if (!strcmp(argv[2],"--ctof"))
		{
			cout << argv[3] << " Celsius converted to Fahrenheit is: " << cpp_ctof(argv[3]) << " Fahrenheit" << endl;
		}
	}
}