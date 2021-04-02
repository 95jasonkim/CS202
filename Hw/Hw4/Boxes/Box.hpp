#ifndef BOX_HPP
#define BOX_HPP
#include<iostream>
#include<string>
#include<memory>

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
	std::string type() const override;
	void print(std::ostream& os) const;
private:
};


class HollowBox : public Box
{
public:
	HollowBox();
	HollowBox(int w, int h);
	std::string type() const override;
	void print(std::ostream& os) const;
private:
};


class CheckeredBox : public Box
{
public:
	CheckeredBox();
	CheckeredBox(int w, int h);
	std::string type() const override;
	void print(std::ostream& os) const;
private:
};

std::unique_ptr<Box> boxFactory(char c, int w, int h);

#endif
