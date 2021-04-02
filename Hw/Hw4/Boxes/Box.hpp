#ifndef BOX_HPP
#define BOX_HPP
#include<iostream>
#include<string>

class Box
{
public:
	Box(int w,int h);

	int	getWidth();
	int getHeight();
	void setWidth(int w);
	void setHeight(int h);

	virtual void print(std::ostream& os)=0;
	virtual std::string type() = 0;

private:
	int _width;
	int _height;
};


#endif
