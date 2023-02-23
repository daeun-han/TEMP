#include <iostream>
#include <string>
#include "Anagram.h"

using namespace std;

int main()
{
	cout << "<Exercise 10-1>" << endl;
	Anagram a1("silent", "listen");
	cout << a1.getFirst() << " and " << a1.getSecond() << " are "
		<< (a1.isAnagram() ? "anagrams" : "not anagrams") << endl;

	Anagram a2("split", "lisp");
	cout << a2.getFirst() << " and " << a2.getSecond() << " are "
		<< (a2.isAnagram() ? "anagrams" : "not anagrams") << endl;

	Anagram b;
	cout << "Two empty strings are "
		<< (b.isAnagram() ? "anagrams" : "not anagrams") << endl;


	// Prompt the user to enter two strings
	cout << "Enter a string s1: ";
	string s1;
	cin >> s1;

	// Prompt the user to enter two strings
	cout << "Enter a string s2: ";
	string s2;
	cin >> s2;

	Anagram c(s1, s2);
	cout << c.getFirst() << " and " << c.getSecond() << " are "
		<< (c.isAnagram() ? "anagrams" : "not anagrams") << endl << endl;

	return 0;
}


