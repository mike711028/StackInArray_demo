#include "stack.h"



void Stack::Push(int key)
{
	// the beginning of array's index is ZERO
	if (top == MAX_SIZE - 1)
	{
		std::cout << "ERROR: Overflow" << std::endl;

		// use "return" can end this function directly
		return;
	}
	
	top = top + 1;
	A[top] = key;

}