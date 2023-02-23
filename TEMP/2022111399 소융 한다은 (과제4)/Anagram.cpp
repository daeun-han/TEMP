#include "Anagram.h"
#include <string>
using namespace std;

Anagram::Anagram()
{
	string s = "";
}

Anagram::Anagram(string s1, string s2)
{
	first = s1;
	second = s2;
}

string Anagram::getFirst()
{
	return first;
}

string Anagram::getSecond()
{
	return second;
}

void Anagram::stringSort(string& s)
{
	for (int i = 0; i < s.length() - 1; i++)
	{
		char currentMin = s[i];
		int currentMinIndex = i;

		for (int j = i + 1; j < s.length(); j++)
		{
			if (currentMin > s[j])
			{
				currentMin = s[j];
				currentMinIndex = j;
			}
		}

		if (currentMinIndex != i)
		{
			s[currentMinIndex] = s[i];
			s[i] = currentMin;
		}
	}
}

bool Anagram::isAnagram()
{
	if (first.length() != second.length())
		return false;
}
