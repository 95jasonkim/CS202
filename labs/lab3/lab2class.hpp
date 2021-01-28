#ifndef LABTWO_HPP
#define LABTWO_HPP
#include<iostream>
using std::cout;
using std::endl;
#include<string>
using std::string;


class Lab
{
public:
	Lab();
	Lab(const Lab& L);
	Lab(string name);
	~Lab();

	void setName(string name);
	string getName() const;
private:
	string _name;
};


#endif 