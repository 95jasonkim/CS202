/*
Jason Kim
CS202 hw2
Memory Layout
*/
#include<iostream>
using std::cout;
using std::endl;

void printPointer(int& i)
{
	int* iptr = &i;
	cout << "i = " << *iptr << endl;
	cout << "&i = " << iptr << endl;
}

int main()
{
	cout << "stack storage: " << endl;
	int stack =1;
	printPointer(stack);
	int stack2 = 2;
	printPointer(stack2);
	cout << endl;

	cout << "static storage: " << endl;
	static int myStatic = 3;
	static int myStatic2 = 4;
	printPointer(myStatic);
	printPointer(myStatic2);
	cout << endl;

	cout << "free store: " << endl;
	int *free = new int(5);
	int *free2 = new int(6);
	printPointer(*free);
	printPointer(*free2);
	cout << endl;

	cout << "free store array: " << endl;
	int size = 4;
	int* freeArr = new int[size];
	for (int i = 0; i < size; i++)
	{
		freeArr[i] = i + 1;
		printPointer(freeArr[i]);
	}
}
