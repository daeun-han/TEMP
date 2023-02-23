#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	int totalSeconds = time(0);

	int currentSecond = totalSeconds % 60;

	int totalMinutes = totalSeconds / 60;

	int currentMinute = totalMinutes % 60;

	int totalHours = totalMinutes / 60;

	int currentHour = (totalHours + 9) % 24;

	cout << "Current time is " << currentHour << ":" << currentMinute << ":" << currentSecond << " KST" << endl;

	//문제1
	double number1, number2, number3;
	cout << "\n<문제 #1> \n0과 9사이의 정수를 3개 입력하세요: ";
	cin >> number1 >> number2 >> number3;

	double decimal = 100 * number1 + 10 * number2 + number3;

	cout << "==> 3개의 수로 이루어진 십진수: " << decimal << endl;

	//문제2
	int number4;
	cout << "\n<문제 #2> \n0과 999사이의 정수를 입력하세요: ";
	cin >> number4;

	int total = number4 / 100 + (number4 / 10) % 10 + number4 % 10;

	cout << "==> 각 자리수의 합: " << total << endl;

	//문제3
	int number5;
	cout << "\n<문제 #3> \n0과 31사이의 정수를 입력하세요: ";
	cin >> number5;

	int binary = (((((number5 / 2) / 2) / 2) / 2) % 2) , ((((number5 / 2) / 2) / 2) % 2) , (((number5 / 2) / 2) % 2) ,((number5 / 2) % 2), number5 % 2;

	cout << "==> " << number5 << "(십진수) = " << binary << "(이진수) " << endl;

	return 0;
}