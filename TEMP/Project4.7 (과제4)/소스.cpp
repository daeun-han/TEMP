#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double n1, n2, n3, n4, n5, n6;
	cout << "Enter three points for a triangle: ";
	cin >> n1 >> n2 >> n3 >> n4 >> n5 >> n6;

	double side1 = pow(pow(n5 - n3, 2) + pow(n6 - n4, 2), 0.5);
	double side2 = pow(pow(n5 - n1, 2) + pow(n6 - n2, 2), 0.5);
	double side3 = pow(pow(n3 - n1, 2) + pow(n4 - n2, 2), 0.5);

	double s = (side1 + side2 + side3) / 2;
	double area = pow(s*(s - side1)*(s - side2)*(s - side3), 0.5);

	cout << "The area of the triangle is " << area;

	return 0;
}