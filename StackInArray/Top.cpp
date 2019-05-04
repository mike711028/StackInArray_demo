#include "stack.h"


int Stack::Top()
{
	if (top == -1)
	{
		std::cout << "It is an empty array" << std::endl;
		return 0;
	}
	else
	{
		return A[this->top];
	}
}