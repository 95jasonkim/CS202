/*
Jason Kim
CS202 Time it 1
*/
#include "StopWatch.hpp"
#include <iostream>
using std::cout;
using std::endl;
#include<Windows.h>

int main()
{
	StopWatch S;
	Sleep(1234); // for testing
	S.stop();
	cout << S.seconds() << endl;
	cout << S.milliSeconds() << endl;
}