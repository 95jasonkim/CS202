/*
Jason Kim
cs202 hw3 token main
*/
#include"token.hpp"
using std::cout;
using std::endl;
#include<fstream>
using std::ifstream;
using std::string;
using std::getline;
using std::vector;
#include<chrono>

int main(int argc, char** argv)
{
	string name = argv[1];
	ifstream ifs(name);
	/* code for taking time
	auto start = std::chrono::high_resolution_clock::now();
	auto test = readLines(ifs);
	auto stop = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);
	cout << duration.count() << " microseconds" << endl;
	*/
	printTokens(cout, readLines(ifs));
}