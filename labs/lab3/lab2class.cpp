/**/
#include "lab2class.hpp"

Lab::Lab():_name("default")
{
	cout << "Called default constructor named default" << endl;
}

Lab::Lab(const Lab& L):_name(L._name)
{
	cout << "Called copy constructor for " << L._name<<endl;
}

Lab::Lab(string name):_name(name)
{
	cout << "Called constructor with parameters called " << name<<endl;
}

Lab::~Lab()
{
	cout << "Called destructor for " << _name<< endl;
}

void Lab::setName(string name)
{
	_name = name;
}


string Lab::getName() const
{
	return _name;
}

