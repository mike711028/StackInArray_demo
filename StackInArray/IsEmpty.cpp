#include "stack.h"

bool Stack::IsEmpty()
{
	if (top == -1)
	{
		std::cout << "It is an empty array" << std::endl;
		return true;
	}

	return false;
}