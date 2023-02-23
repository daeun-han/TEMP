#include <iostream>
#include "Loan.h"
using namespace std;

class A
{
public:
	Loan loan;
	int i;
};

int main()
{
	A a;
	cout << a.loan.getLoanAmount() << endl;
	cout << a.i << endl;

	return 0;
}