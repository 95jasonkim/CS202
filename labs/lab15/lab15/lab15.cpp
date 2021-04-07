/*
Jason Kim
CS202 lab15
*/
#include "Wrapper.hpp"
#include<string>
#include<iostream>
int main()
{
	Wrapper<int> w{ 2 };
	Wrapper<std::string> s{ "Hello world!" };
	std::cout << w << " " << s << std::endl;
}