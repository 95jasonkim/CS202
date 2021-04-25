#ifndef MY_READ_WRITE
#define MY_READ_WRITE
#include<iostream>

template <typename T>
void myWrite(std::ostream& os,const T& t)
{
	os.write(reinterpret_cast<const char *>(t), sizeof(t));
}


template<typename T>
void myRead(const std::istream& is, T& t)
{
	is.read(reinterpret_cast<char*>(t), sizeof(T));
}

#endif