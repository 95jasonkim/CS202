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

HollowBox::HollowBox() : Box(1, 1)
{
}

HollowBox::HollowBox(int w, int h) : Box(w, h)
{
}

CheckeredBox::CheckeredBox() : Box(1, 1)
{
}

CheckeredBox::CheckeredBox(int w, int h) : Box(w, h)
{
}

std::string FilledBox::type() const
{
	return std::string("Filled");
}
std::string HollowBox::type() const
{
	return std::string("Hollow");
}
std::string CheckeredBox::type() const
{
	return std::string("Checkered");
}


void FilledBox::print(std::ostream& os) const
{
	for (int h = 0; h < getHeight(); h++)
	{
		for (int w = 0; w < getWidth(); w++)
		{
			os << "x";
		}
		os << "\n";
	}
}

void HollowBox::print(std::ostream& os) const
{

	for (int h = 0; h < getHeight(); h++)
	{
		if (h == 0 || h == getHeight() - 1) // first or last line
		{
			for (int w = 0; w < getWidth(); w++) os << "x";
			os << "\n";
		}
		else
		{
			for (int w = 0; w < getWidth(); w++)
			{
				if (w == 0 || w == getWidth() - 1) os << "x"; 
				else os << " ";
			}
			os << "\n";
		}
	}
}

void CheckeredBox::print(std::ostream& os) const
{
	for (int h = 0; h < getHeight(); h++)
	{
		if (h % 2 == 0) //odd lines
		{
			for (int w = 0; w < getWidth(); w++)
			{
				if (w % 2 == 0)os << "x"; //odd pos
				else os << " ";
			}
			os << "\n";
		}
		else //even lines
		{
			for (int w = 0; w < getWidth(); w++)
			{
				if (w % 2 == 0)os << " "; //odd pos
				else os << "x";
			}
			os << "\n";
		}
	}
}