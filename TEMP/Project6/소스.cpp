#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	//문제1 (1)
	int d = 0;
	char a;

	cout << "Is your birthday in Set1?" << endl;
	cout << " 1  3  5  7\n";
	cout << " 9 11 13 15\n";
	cout << "17 19 21 23\n";
	cout << "25 27 29 31\n";
	cout << "Enter N/n for No and Y/y for Yes: ";
	cin >> a;

	if (a == 'Y' || a == 'y')
		d += 1;

	cout << "\nIs your birthday in Set2?" << endl;
	cout << " 2  3  6  7\n";
	cout << "10 11 14 15\n";
	cout << "18 19 22 23\n";
	cout << "26 27 30 31\n";
	cout << "Enter N/n for No and Y/y for Yes: ";
	cin >> a;

	if (a == 'Y' || a == 'y')
		d += 2;

	cout << "\nIs your birthday in Set3?" << endl;
	cout << " 4  5  6  7\n";
	cout << "12 13 14 15\n";
	cout << "20 21 22 23\n";
	cout << "28 29 30 31\n";
	cout << "Enter N/n for No and Y/y for Yes: ";
	cin >> a;

	if (a == 'Y' || a == 'y')
		d += 4;

	cout << "\nIs your birthday in Set4?" << endl;
	cout << " 8  9 10 11\n";
	cout << "12 13 14 15\n";
	cout << "24 25 26 27\n";
	cout << "28 29 30 31\n";
	cout << "Enter N/n for No and Y/y for Yes: ";
	cin >> a;

	if (a == 'Y' || a == 'y')
		d += 8;

	cout << "\nIs your birthday in Set5?" << endl;
	cout << "16 17 18 19\n";
	cout << "20 21 22 23\n";
	cout << "24 25 26 27\n";
	cout << "28 29 30 31\n";
	cout << "Enter N/n for No and Y/y for Yes: ";
	cin >> a;

	if (a == 'Y' || a == 'y')
		d += 16;

	cout << "\nYour birthday is: " << d << endl;

	//문제1 (2)
	int m = 0;
	   
	cout << "\n\n\nIs your birthmonth in Set1?" << endl;
	cout << " 1 3 5 7 9 11\n";

	cout << "Enter N/n for No and Y/y for Yes: ";
	cin >> a;

	if (a == 'Y' || a == 'y')
		m += 1;

	cout << "\nIs your birthmonth in Set2?" << endl;
	cout << " 2 3 6 7 10 11\n";
	cout << "Enter N/n for No and Y/y for Yes: ";
	cin >> a;

	if (a == 'Y' || a == 'y')
		m += 2;

	cout << "\nIs your birthmonth in Set3?" << endl;
	cout << " 4 5 6 7 12\n";
	cout << "Enter N/n for No and Y/y for Yes: ";
	cin >> a;

	if (a == 'Y' || a == 'y')
		m += 4;

	cout << "\nIs your birthmonth in Set4?" << endl;
	cout << " 8 9 10 11 12\n";
	cout << "Enter N/n for No and Y/y for Yes: ";
	cin >> a;

	if (a == 'Y' || a == 'y')
		m += 8;

	cout << "\nYour birthmonth is: " << m << endl;



	//문제2
	const double PI = 3.14159;

	cout << "\n\n\nEnter the length from the center to a vertex: ";
	double r;
	cin >> r;
	
	double s = r * sin(PI / 5);
	s = 2 * s;
	double area = (5 * pow(s, 2.0)) / (4 * tan(PI / 5));
	
	cout << "The area of the pentagon is " << area << endl;

	return 0;

}