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

class TV
{
public:
	int channel;
	int volumeLevel;
	bool on;

	TV()
	{
		channel = 1;
		volumeLevel = 1;
		on = false;
	}

	void turnOn()
	{
		on = true;
	}

	void turnOff()
	{
		on = false;
	}

	void setChannel(int newChannel)
	{
		if (on && newChannel >= 1 && newChannel <= 120)
			channel = newChannel;
	}

	void setVolume(int newVolumeLevel)
	{
		if (on && newVolumeLevel >= 1 && newVolumeLevel <= 7)
			volumeLevel = newVolumeLevel;
	}

	void channelUp()
	{
		if (on && channel < 120)
			channel++;
	}

	void channelDown()
	{
		if (on && channel > 1)
			channel--;
	}

	void volumeUp()
	{
		if (on && volumeLevel < 7)
			volumeLevel++;
	}

	void volumeDown()
	{
		if (on && volumeLevel > 1)
			volumeLevel--;
	}

	TV(int newChannel, int newVolumeLevel)
	{
		channel = newChannel;
		volumeLevel = newVolumeLevel;
		on = true;
	}

	void channelUpby2()
	{
		if (on && (channel + 2) <= 120)
			channel = channel + 2;
		else
			cout << "Channel-up error!" << endl;
	}

	void channelUp(int delta)
	{
		if (on && (channel + delta) <= 120)
			channel = channel + delta;
		else
			cout << "Channel-up error!" << endl;
	}

	void channelDownby2()
	{
		if (on && (channel - 2) >= 1)
			channel = channel - 2;
		else
			cout << "Channel-down error!" << endl;
	}

	void channelDown(int delta)
	{
		if (on && (channel - delta) >= 1)
			channel = channel - delta;
		else
			cout << "Channel-down error!" << endl;
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

	cout << "¿©±â¼­, circle2.getPerimeter() = " << circle2.getPerimeter() << ", circle3.getPerimeter() = " << circle3.getPerimeter() << endl << endl << endl;


	TV tv1;
	tv1.turnOn();
	tv1.setChannel(30);
	tv1.setVolume(3);

	cout << "tv1's channel is " << tv1.channel << " and volume level is " << tv1.volumeLevel << endl;

	tv1.channelUpby2();
	cout << "tv1's channel is " << tv1.channel << endl;

	tv1.channelUp(40);
	cout << "tv1's channel is " << tv1.channel << endl;

	tv1.channelUp(100);
	cout << "tv1's channel is " << tv1.channel << endl << endl;

	tv1.channelDown();
	cout << "tv1's channel is " << tv1.channel << endl;

	tv1.channelDownby2();
	cout << "tv1's channel is " << tv1.channel << endl;

	tv1.channelDown(80);
	cout << "tv1's channel is " << tv1.channel << endl << endl;

	TV tv1_1(2, 3);
	cout << "tv1_1's channel is " << tv1_1.channel << endl;
	tv1_1.channelUp(10);
	cout << "tv1_1's channel is " << tv1_1.channel << endl;
	tv1_1.turnOff();
	tv1_1.channelUp();
	cout << "tv1_1's channel is " << tv1_1.channel << endl << endl;

	TV tv2;
	tv2.turnOn();
	tv2.channelUp();
	tv2.channelUp();
	tv2.volumeUp();

	cout << "tv2's channel is " << tv2.channel << " and volume level is " << tv2.volumeLevel << endl;

	return 0;
}