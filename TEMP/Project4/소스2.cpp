#include <iostream>
using namespace std;

int maine()
{
	const double PI = 3.14159;

	cout << "=*27" << endl;
	double radius;
	cout << "반지름을 입력하세요: ";
	cin >> radius;


	double area = (radius * radius *  PI);
	double perimeter = (2 * radius *  PI);
	double circumscribed = (4 * radius * radius);
	double inscribed = (2 * radius * radius);

	
	cout << "원의 면적: " << area << endl;
	cout << "원의 둘레: " << perimeter << endl;
	cout << "외접 정사각형의 면적: " << circumscribed << endl;
	cout << "내접 정사각형의 면적: " << inscribed << endl;
	cout << "=*27" << endl;

	return 0;
}