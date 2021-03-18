/*
Jason Kim
CS202 lab10
*/
#include <iostream>
#include<stdexcept>
#include<vector>
using std::runtime_error;
#include"lab2class.hpp"
using std::cin;
using std::cout;
using std::endl;

void functionC(){
    //your code here
    throw runtime_error("functionC() threw std::runtime_error");
}

void functionB(){
 // your code here
    Lab l;
    cout << "Starting functionB()" << endl;
    functionC();
    cout << "Ending functionB()" << endl;
}

void functionA(){
    try
    {
        std::vector<Lab> v(10);
        functionB();
    }
    // your code here
    catch(const std::exception &e)
    {
        cout << "Caught an exception: " << e.what() << endl;

    }
    // your code here
}
int main() {
    cout << "Starting main()" << endl;
    functionA();
    cout << "Ended normally." << endl;
    return 0;
}
