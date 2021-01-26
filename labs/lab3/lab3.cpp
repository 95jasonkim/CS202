/*
Jason Kim 
CS202 lab3
*/
#include<iostream>
using std::cout;
using std::endl;

#include "lab2class.hpp"

int main()
{
	Lab l(1, 2);
	cout << "created l pointer" << endl;
	auto lpoint = &l;
}