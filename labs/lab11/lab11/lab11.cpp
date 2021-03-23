/*
CS202 lab11
*/
#include<iostream>
using std::cout;
using std::endl;
#include<string>
using std::string;

class Animal
{
public: 
	Animal()
	{
		cout << "Called base constructor." << endl;
	}
	Animal(const string& name) : _name(name)
	{
		cout << "Called base constructor with name: " << name << endl;
	}
	~Animal()
	{
		cout << "Called base destructor"<< endl;
	}
private:
	string _name;
};

class Dog : public Animal
{
public:
	using Animal::Animal;

	Dog()
	{
		cout << "Called derived constructor." << endl;
	}
	Dog(const string& name,int age) : Animal(name),_age(age)
	{
		cout << "Called derived constructor with name: " << name <<" and age: "<< age<< endl;
	}
	~Dog()
	{
		cout << "Called derived destructor" << endl;
	}
private:
	int _age = 0;
};


int main()
{
	{
		Animal a;
	}

	cout << endl;

	{
		Animal b("one");
	}

	cout << endl;

	{
		Dog c;
	}

	cout << endl;

	{
		Dog d("two", 3);
	}

	cout << endl;

	{
		Dog e("three");
	}
}