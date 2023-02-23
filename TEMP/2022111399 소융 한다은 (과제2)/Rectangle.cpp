#include "Rectangle.h"
using namespace std;

Rectangle::Rectangle()
{
	width = 1;
	height = 1;
}

Rectangle::Rectangle(double nWidth, double nHeight)
{
	width = nWidth;
	height = nHeight;
}

double Rectangle::getArea()
{
	return width * height;
}

double Rectangle::getPerimeter()
{
	return 2 * (width + height);
}

double Rectangle::getWidth()
{
	return width;
}

double Rectangle::getHeight()
{
	return height;
}

void Rectangle::setWidth(double nWidth)
{
	width = nWidth;
}

void Rectangle::setHeight(double nHeight)
{
	height = nHeight;
}