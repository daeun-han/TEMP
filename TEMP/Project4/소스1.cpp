#include <iostream>
using namespace std;

int Main()
{

	double number1;
	double number2;
	double number3;
	cout << "Enter three numbers: ";
	cin >> number1;
	cin >> number2;
	cin >> number3;


	double average = (number1 + number2 + number3) / 3;


	cout << "The average of " << number1 << " " << number2
		<< " " << number3 << " is " << average << endl;

	return 0;
}