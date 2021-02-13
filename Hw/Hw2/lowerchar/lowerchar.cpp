/*
Jason Kim
CS202 hw2
lower character
*/

#include<iostream>
using std::cout;
using std::endl;


void to_lower(char* s)
{
	int length = 0;
	while (*s)
	{
		if (*s >= 65 && *s <= 90)
		{
			*s += 32;
		}
		s++;
		length++;
	}
	s -= length;
}

int main()
{
	char test[] = "Hello, World!";
	cout << "Original C-string: " << test << endl;

	to_lower(test);
	cout << "Lower cased C-string: " << test << endl;
}