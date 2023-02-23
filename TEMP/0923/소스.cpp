#include <iostream>
using namespace std;

class Circle
{
public:
	double radius;

	Circle()
	{
		radius = 1;
	}

	Circle(double newRadius)
	{
		radius = newRadius;
	}

	double getArea()
	{
		return radius * radius * 3.14159;
	}

	double getPerimeter()
	{
		return 2 * radius * 3.14159;
	}

	double plusRadius(Circle newCircle)
	{
		return radius + newCircle.radius;
	}

	Circle plusRadiusObject(Circle newCircle)
	{
		return radius + newCircle.radius;
	}

	double plusArea(Circle newCircle)
	{
		return getArea() + newCircle.getArea();
	}

	double plusPerimeter(Circle newCircle)
	{
		return getPerimeter() + newCircle.getPerimeter();
	}

	void setRadius(double newRadius)
	{
		radius = newRadius;
	}
};

int main()
{
	Circle circle1(1.0);
	Circle circle2(25);
	Circle circle3(125);

	cout << "The area of the circle of radius " << circle1.radius << " is " << circle1.getArea() << endl;
	cout << "The area of the circle of radius " << circle2.radius << " is " << circle2.getArea() << endl;
	cout << "The area of the circle of radius " << circle3.radius << " is " << circle3.getArea() << endl;

	circle2.radius = 100;

	cout << "The area of the circle of radius " << circle2.radius << " is " << circle2.getArea() << endl;

	cout << "---------------------------------------------------------------" << endl;

	cout << "circle1.plusRadius(circle2) = " << circle1.plusRadius(circle2) << endl;

	cout << "circle1.plusRadiusObject(circle2).getPerimeter() = " << circle1.plusRadiusObject(circle2).getPerimeter() << endl;

	cout << "circle2.plusArea(circle3) = " << circle2.plusArea(circle3) << endl;

	cout << "circle2.plusPerimeter(circle3) = " << circle2.plusPerimeter(circle3) << endl;

	cout << "���⼭, circle2.getPerimeter() = " << circle2.getPerimeter() << ", circle3.getPerimeter() = " << circle3.getPerimeter() << endl;

	return 0;
}