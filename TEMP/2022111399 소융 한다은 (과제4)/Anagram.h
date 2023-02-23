#include <string>
using namespace std;

class Anagram
{
public:
	Anagram();
	Anagram(string s1, string s2);
	string getFirst();
	string getSecond();
	void stringSort(string& s);
	bool isAnagram();

private:
	string first;
	string second;

};
