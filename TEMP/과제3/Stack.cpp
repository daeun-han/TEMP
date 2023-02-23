#include "Stack.h"

StackOfStrings::StackOfStrings()
{
	size = 0;
}

bool StackOfStrings::isEmpty() const
{
	return size == 0;
}

string StackOfStrings::peek() const
{
	return elements[size-1];
}

void StackOfStrings::push(string value)
{
	elements[size++] = value;
}

string StackOfStrings::pop()
{
	return elements[--size];
}

string StackOfStrings::getSize() const
{
	return string();
}
