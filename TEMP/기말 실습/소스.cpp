#include <iostream> 
#include <cmath>

using namespace std;

int main()
{
	int n = 8;
	for (int i = 1; i <= n ; i++)
	{
		for (int j = 1; j <= 14 - i; j++)
			cout << "  ";
		
		for (int k = 1; k <= i; k++)
			cout << pow(2, k -1) << " ";

		for (int g = i - 1; g > 0; g--)
			cout << pow(2, g - 1) << " ";
		cout << "\n";
	}
	return 0;
}