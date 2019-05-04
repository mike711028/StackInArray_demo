#include "stack.h"


void Stack::Pop()
{
	if (top == MAX_SIZE - 1)
	{
		std::cout << "ERROR: Overflow" << std::endl;
		return;
	}
	else if (top == -1)
	{
		std::cout << "It is an empty array" << std::endl;
		return;
	}

	// ignore the value, just move the position of "top"
	// the value will be cover by the new value in Push()
	top--;
}