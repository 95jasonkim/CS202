#ifndef BOX_HPP
#define BOX_HPP

class Box
{
public:
	Box(int w,int h);

	int	getWidth();
	int getHeight();
	void setWidth(int w);
	void setHeight(int h);
private:
	int _width;
	int _height;
};


#endif
