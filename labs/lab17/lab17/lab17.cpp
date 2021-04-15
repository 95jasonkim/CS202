/*Jason kim CS202 lab17*/
#include<iostream>
using std::cout;
using std::endl;
#include<string>
using std::string;
#include<vector>
using std::vector;

template <typename Iterator>
void printReversed(Iterator theBegin, Iterator theEnd) {
	if (theBegin == theEnd) return;
	cout << *--theEnd << " ";
	printReversed(theBegin, theEnd);
}

int main() {
	string s("Hello World!");
	printReversed(begin(s), end(s));
	cout << "\n";
	vector<int> primes{ 2,3,5,7,11,13,17 };
	printReversed(begin(primes), end(primes));
	cout << "\n";
	return 0;
}
