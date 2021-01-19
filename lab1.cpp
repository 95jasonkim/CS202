/*
Jason Kim
CS202 lab1
*/
#include<iostream>
using std::cout;
using std::endl;

void printTen()
{
	int count = 1;
	do {
		cout << count++ << " ";
	} while (count <= 10);
	cout << endl;
}

int main()
{
	int num = 1;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	while (true)
	{
		if (num == 1)
		{
			printTen();
			for (auto i : arr)
			{
				cout << i << " ";
			}
			cout << endl;
			for (int i = 1; i <= 10; i++)
			{
				cout << i << " ";
			}
			cout << endl;
		}
		else break;
		switch (num)
		{
		case 0:
			cout << "Program terminated." << endl;
			break;
		case 1:
			cout << "Counts to ten." << endl;
			num = 0;
			break;
		default:
			cout << "Error" << endl;
			break;
		}
	}
}