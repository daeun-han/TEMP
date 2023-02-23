#include <string>

using namespace std;

class StackOfStrings
{
public:
	StackOfStrings();
	bool isEmpty() const;
	string peek() const;
	void push(string value);
	string pop();
	string getSize() const;

private:
	string elements[100];
	int size;
};
