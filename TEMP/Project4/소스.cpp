#include <iostream>
using namespace std;

int main()
{

	double number1, number2, number3;
	cout << "Enter three numbers: ";
	cin >> number1 >> number2 >> number3;


	double average = (number1 + number2 + number3) / 3;


	cout << "The average of " << number1 << " " << number2
		<< " " << number3 << " is " << average << endl;

	return 0;
}