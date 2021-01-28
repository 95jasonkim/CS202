/*
Jason Kim 
CS202 lab3
*/
#include<iostream>
using std::cout;
using std::endl;
#include<memory>
using std::unique_ptr;
using std::make_unique;
using std::make_shared;
using std::move;

#include "lab2class.hpp"

int main()
{
	//Lab l;
	
	cout << "created raw pointer" << endl;
	Lab* rptr = new Lab;

	cout << "created unique pointer" << endl;
	auto uptr = make_unique<Lab>("unique");

	cout << "Transfered ownership from uptr to uptr2" << endl;
	unique_ptr<Lab> uptr2 = move(uptr);

	cout << "Name from uptr2 is: " << uptr2->getName() << endl;

	cout << "created shared pointer" << endl;
	auto sptr = make_shared<Lab>("shared");

	cout << "created second shared pointer" << endl;
	std::shared_ptr<Lab> sptr2=sptr;
}