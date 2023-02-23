#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	int correct = 0;
	int count = 0;
	long Time = time(0);

	srand(time(0));

	char loop = 'Y';
	while (loop == 'Y')
	{
		int n1 = rand() % 10;
		int n2 = rand() % 10;

		if (n1 < n2)
		{
			int temp = n1;
			n1 = n2;
			n2 = temp;
		}
		cout << "What is " << n1 << " - " << n2 << "? ";
		int a;
		cin >> a;

		if (n1 - n2 == a)
		{
			cout << "You are correct!\n";
			correct++;
		}
		else
			cout << "Your answer is wrong.\n" << n1 << " - " << n2 << " should be " << (n1 - n2) << endl;
		count++;

		cout << "Enter Y to continue and N to quit: ";
		cin >> loop;
	}

	long end = time(0);
	long test = end - Time;

	cout << "Correct count is " << correct << "\nTest time is " << test << " seconds\n";

	return 0;
}