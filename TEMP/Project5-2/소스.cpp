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

	//����1
	double number1, number2, number3;
	cout << "\n<���� #1> \n0�� 9������ ������ 3�� �Է��ϼ���: ";
	cin >> number1 >> number2 >> number3;

	double decimal = 100 * number1 + 10 * number2 + number3;

	cout << "==> 3���� ���� �̷���� ������: " << decimal << endl;

	//����2
	int number4;
	cout << "\n<���� #2> \n0�� 999������ ������ �Է��ϼ���: ";
	cin >> number4;

	int total = number4 / 100 + (number4 / 10) % 10 + number4 % 10;

	cout << "==> �� �ڸ����� ��: " << total << endl;

	//����3
	int number5;
	cout << "\n<���� #3> \n0�� 31������ ������ �Է��ϼ���: ";
	cin >> number5;

	int binary = (((((number5 / 2) / 2) / 2) / 2) % 2) , ((((number5 / 2) / 2) / 2) % 2) , (((number5 / 2) / 2) % 2) ,((number5 / 2) % 2), number5 % 2;

	cout << "==> " << number5 << "(������) = " << binary << "(������) " << endl;

	return 0;
}