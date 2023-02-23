#include <iostream>
#include <ctime>
#include "Rectangle.h"
#include "Time.h"
using namespace std;

int main()
{
	cout << "=============================================================" << endl;
	cout << "<Exercise 09-01>" << endl;
	Rectangle r1(4, 40);
	cout << "The first rectangle: width = " << r1.getWidth() << ", height = " << r1.getHeight() << endl;
	cout << "Area = " << r1.getArea() << endl;
	cout << "Perimeter = " << r1.getPerimeter() << endl << endl;

	Rectangle r2(3.5, 35.9);
	cout << "The second rectangle: width = " << r2.getWidth() << ", height = " << r2.getHeight() << endl;
	cout << "Area = " << r2.getArea() << endl;
	cout << "Perimeter = " << r2.getPerimeter() << endl << endl;

	r2.setWidth(2.5);
	r2.setHeight(34.9);
	cout << "The third rectangle: width = " << r2.getWidth() << ", height = " << r2.getHeight() << endl;
	cout << "Area = " << r2.getArea() << endl;
	cout << "Perimeter = " << r2.getPerimeter() << endl << endl;

	cout << "=============================================================" << endl;
	cout << "<Exercise 09-05>" << endl;
	Time time1;
	cout << "Current Time = " << time1.getHour() << "h:" << time1.getMinute()
		<< "m:" << time1.getSecond() << "s" << " KST" << endl;
	Time time2(555550);
	cout << "Time(555550) = " << time2.getHour() << "h:" << time2.getMinute()
		<< "m:" << time2.getSecond() << "s" << " KST" << endl;
	time2.setTime(47470);
	cout << "Time(47470) = " << time2.getHour() << "h:" << time2.getMinute()
		<< "m:" << time2.getSecond() << "s" << " KST" << endl;

	return 0;
}
