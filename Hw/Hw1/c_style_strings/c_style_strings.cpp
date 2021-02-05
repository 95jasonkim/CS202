/*
Jason Kim
CS202 Hw1
c_style_strings
*/
#include<iostream>
using std::cout;
using std::endl;

char* myStrdup(const char* x)
{
	int length = 0;
	while (*x)
	{
		x++;
		length++;
	}
	x -= length;
	char* copy = new char[length];
	for (int i = 0; i < length; i++)
	{
		*copy = *x;
		copy++;
		x++;
	}
	*copy = '\0';
	copy -= length;
	return copy;
}

char* findx(const char* s, const char* x)
{
	auto start = myStrdup(s);
	while (*s)
	{
		int count = 0;
		auto find = myStrdup(x);
		while (*find && *find == *start)
		{
			find++;
			start++;
			count++;
		}
		if (!*find) return start - count;
		start++;
	}
	return NULL;
}

int main()
{
	//from my modern world history textbook
	const char* text = "The Korean conflict was the first major military battle of the Cold War between democracy and communism.";
	auto test = myStrdup(text);
	cout << "Testing myStrdup function..." << endl;
	cout << test << '\n'<<endl;

	const char* findThis = "Cold War";
	cout << "Testing findx function..." << endl;
	cout << findx(text, findThis) << endl;
}