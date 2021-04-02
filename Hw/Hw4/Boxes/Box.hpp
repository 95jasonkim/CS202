#ifndef BOX_HPP
#define BOX_HPP
#include<iostream>
#include<string>

class Box
{
public:
	Box(int w,int h);

	int	getWidth() const;
	int getHeight() const;
	void setWidth(int w);
	void setHeight(int h);

	virtual void print(std::ostream& os) const =0;
	virtual std::string type() const = 0;

private:
	int _width;
	int _height;
};

std::ostream& operator<<(std::ostream& os, const Box& b);

class FilledBox : public Box
{
public:
	FilledBox();
	FilledBox(int w, int h);
private:
};


class HollowBox : public Box
{
public:
	HollowBox();
	HollowBox(int w, int h);
private:
};


class CheckeredBox : public Box
{
public:
private:
};



#endif
