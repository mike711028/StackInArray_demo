#include "stack.h"


void Stack::PrintArray()
{
	if (top == -1)
	{
		std::cout << "It is an empty array" << std::endl;
	}
	else
	{
		std::cout << "The array is [ ";

		// notice the boundary of top + 1 
		for (int i = 0; i < top + 1; i++)
		{
			std::cout << A[i] << " ";
		}
		std::cout << "]" << std::endl;
	}
}