#ifndef WRAPPER_HPP
#define WRAPPER_HPP
#include<iostream>


template<typename T>
class Wrapper
{
public:
	Wrapper(T t);
	T getObj();
	template<typename R>
	friend std::ostream& operator<<(std::ostream& os, const Wrapper<R>& w);
private:
	T _obj;
};


template<typename T>
Wrapper<T>::Wrapper(T t): _obj(t)
{}

template<typename T>
T Wrapper<T>::getObj()
{
	return _obj;
}

template<typename T>
std::ostream& operator<<(std::ostream &os, const Wrapper<T>& w)
{
	return os << w._obj;	
}
#endif