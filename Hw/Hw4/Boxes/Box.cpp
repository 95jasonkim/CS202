#include "Box.hpp"

Box::Box(int w, int h): _width(w), _height(h)
{
}

int	Box::getWidth()
{
	return _width;
}
int Box::getHeight()
{
	return _height;
}