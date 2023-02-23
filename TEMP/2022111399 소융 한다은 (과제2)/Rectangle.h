class Rectangle
{
public:
	Rectangle();
	Rectangle(double, double);
	double getArea();
	double getPerimeter();
	double getWidth();
	double getHeight();
	void setWidth(double);
	void setHeight(double);

private:
	double width;
	double height;
};

