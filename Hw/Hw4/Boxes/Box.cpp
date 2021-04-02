#include "Box.hpp"

Box::Box(int w, int h): _width(w), _height(h)
{
}

int	Box::getWidth() const
{
	return _width;
}
int Box::getHeight() const
{
	return _height;
}

void Box::setWidth(int w)
{
	_width = w;
}
void Box::setHeight(int h)
{
	_height = h;
}


std::ostream& operator<<(std::ostream& os, const Box& b)
{
	b.print(os);
	return os;
}

FilledBox::FilledBox() : Box(1, 1)
{
}

FilledBox::FilledBox(int w, int h) : Box(w, h)
{
}