#ifndef BOX_HPP
#define BOX_HPP

class Box
{
public:
	Box(int w,int h);

	int	getWidth();
	int getHeight();
private:
	int _width;
	int _height;
};


#endif
