#include <iostream>
using namespace std;

int maine()
{
	const double PI = 3.14159;

	cout << "=*27" << endl;
	double radius;
	cout << "�������� �Է��ϼ���: ";
	cin >> radius;


	double area = (radius * radius *  PI);
	double perimeter = (2 * radius *  PI);
	double circumscribed = (4 * radius * radius);
	double inscribed = (2 * radius * radius);

	
	cout << "���� ����: " << area << endl;
	cout << "���� �ѷ�: " << perimeter << endl;
	cout << "���� ���簢���� ����: " << circumscribed << endl;
	cout << "���� ���簢���� ����: " << inscribed << endl;
	cout << "=*27" << endl;

	return 0;
}